#include "../src/twosum.h"
#include <iostream>
#include <vector>

static int passed = 0;
static int failed = 0;

static std::string vec_to_str(const std::vector<int>& v) {
    if (v.empty()) return "{}";
    std::string s = "{";
    for (int i = 0; i < (int)v.size(); ++i) {
        s += std::to_string(v[i]);
        if (i + 1 < (int)v.size()) s += ", ";
    }
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
    check("basic pair",        {2, 7, 11, 15},  9, true);
    check("duplicate values",  {3, 3},          6, true);
    check("negative numbers",  {-1, 2, 3},      1, true);
    check("no valid pair",     {1, 2, 3},       7, false);
    check("empty array",       {},              5, false);
    check("single element",    {5},             5, false);
    check("zeros sum to zero", {0, 4, 3, 0},    0, true);

    std::cout << "\n" << passed << " passed, " << failed << " failed.\n";
    return failed == 0 ? 0 : 1;
}
