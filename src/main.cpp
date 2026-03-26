#include "twosum.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums{2, 7, 11, 15};
    int target = 9;

    auto result = two_sum(nums, target);

    if (result.size() == 2) {
        std::cout << "Indices: " << result[0] << ", " << result[1] << "\n";
        std::cout << "Values: " << nums[result[0]] << " + " << nums[result[1]] << " = " << target << "\n";
    } else {
        std::cout << "No valid pair found for target " << target << "\n";
    }

    return 0;
}
