#include "twosum.h"
#include <unordered_map>

std::vector<int> two_sum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> seen;
    seen.reserve(nums.size());

    for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
        int complement = target - nums[i];
        auto it = seen.find(complement);
        if (it != seen.end()) {
            return {it->second, i};
        }
        // map value to index (first occurrence only)
        if (seen.find(nums[i]) == seen.end()) {
            seen[nums[i]] = i;
        }
    }

    return {};
}
