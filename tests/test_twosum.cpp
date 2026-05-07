#include "../src/twosum.h"
#include <chrono>
#include <climits>
#include <iostream>
#include <numeric>
#include <vector>

static int passed = 0;
static int failed = 0;

static std::string vec_to_str(const std::vector<int>& v, int preview = 6) {
    if (v.empty()) return "{}";
    std::string s = "{";
    int limit = std::min((int)v.size(), preview);
    for (int i = 0; i < limit; ++i) {
        s += std::to_string(v[i]);
        if (i + 1 < limit) s += ", ";
    }
    if ((int)v.size() > preview)
        s += ", ... (" + std::to_string(v.size()) + " elements)";
    return s + "}";
}

static void check(const std::string& name, const std::vector<int>& nums, int target,
                  bool expectFound) {
    auto result = two_sum(nums, target);
    bool ok;
    if (expectFound) {
        ok = result.size() == 2 &&
             nums[result[0]] + nums[result[1]] == target;
    } else {
        ok = result.empty();
    }

    std::string status = ok ? "[PASS]" : "[FAIL]";
    std::cout << status << " " << name << "\n";
    std::cout << "       nums=" << vec_to_str(nums)
              << "  target=" << target << "\n";
    if (result.size() == 2) {
        std::cout << "       result=indices[" << result[0] << ", " << result[1] << "]"
                  << "  values: " << nums[result[0]] << " + " << nums[result[1]]
                  << " = " << (nums[result[0]] + nums[result[1]]) << "\n";
    } else {
        std::cout << "       result={} (no pair found)\n";
    }
    std::cout << "\n";

    ok ? ++passed : ++failed;
}

int main() {
    std::cout << "=== Correctness Tests ===\n\n";

    // Basic cases
    check("basic pair",                  {2, 7, 11, 15},          9,          true);
    check("duplicate values",            {3, 3},                  6,          true);
    check("negative numbers",            {-1, 2, 3},              1,          true);
    check("no valid pair",               {1, 2, 3},               7,          false);
    check("empty array",                 {},                       5,          false);
    check("single element",              {5},                      5,          false);
    check("zeros sum to zero",           {0, 4, 3, 0},            0,          true);

    // Two-element arrays
    check("two elements match",          {4, 6},                  10,         true);
    check("two elements no match",       {4, 6},                  11,         false);

    // Large numbers
    check("large positives",             {1000000, 2000000},      3000000,    true);
    check("large negatives",             {-1000000, -2000000},    -3000000,   true);
    check("mixed large",                 {-999999, 1000000},      1,          true);
    check("large no match",              {1000000, 2000000},      9999999,    false);

    // INT boundary values
    check("INT_MAX + 0",                 {INT_MAX, 0},            INT_MAX,    true);
    check("INT_MIN + 0",                 {INT_MIN, 0},            INT_MIN,    true);

    // Negative target
    check("negative target",             {-3, -1, 2},             -4,         true);
    check("negative target no match",    {1, 2, 3},               -1,         false);

    // Pair at the end of array
    check("pair at end",                 {10, 20, 30, 3, 7},      10,         true);

    // All same values
    check("all same values match",       {5, 5, 5, 5},            10,         true);
    check("all same values no match",    {5, 5, 5, 5},            11,         false);

    // Zero target
    check("non-zero pair sums to zero",  {-7, 3, 7},              0,          true);

    std::cout << "=== Performance Test ===\n\n";

    // Build 1,000,000 element array: values 0..999997, pair {999998, 999999} at the end
    const int N = 1000000;
    std::vector<int> big(N);
    std::iota(big.begin(), big.end(), 0);
    int perf_target = big[N - 1] + big[N - 2];  // worst case: pair is at the very end

    auto t0 = std::chrono::high_resolution_clock::now();
    auto result = two_sum(big, perf_target);
    auto t1 = std::chrono::high_resolution_clock::now();
    double ms = std::chrono::duration<double, std::milli>(t1 - t0).count();

    bool perf_ok = result.size() == 2 &&
                   big[result[0]] + big[result[1]] == perf_target;

    std::cout << (perf_ok ? "[PASS]" : "[FAIL]")
              << " 1,000,000 elements (pair at end)\n"
              << "       target=" << perf_target
              << "  time=" << ms << " ms\n\n";

    perf_ok ? ++passed : ++failed;

    std::cout << "=== Summary ===\n"
              << passed << " passed, " << failed << " failed.\n";
    return failed == 0 ? 0 : 1;
}
