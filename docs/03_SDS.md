# Software Design Specification (SDS) - Two Sum

## 1. Architecture Overview
- `src/twosum.h`: function declaration
- `src/twosum.cpp`: C++ algorithm implementation
- `src/main.cpp`: entry point with sample usage
- `tests/test_twosum.cpp`: C++ unit test suite
- `Makefile`: build and test automation

## 2. Module Descriptions
### 2.1 Module: two_sum
- Input: `const std::vector<int>& nums`, `int target`
- Output: `std::vector<int>` (2-element index vector or empty)
- Algorithm: One-pass hash map approach.
- Behavior: Iterate through nums, compute complement, check map, store values.

### 2.2 Module: main
- Calls `two_sum` using sample data and prints result.

## 3. Data Structures
- `std::unordered_map<int, int>`: maps value to first-seen index
- `std::vector<int>`: input array and return type

## 4. Sequence Flow
1. Call `two_sum(nums, target)`.
2. Loop nums with index i.
3. Let complement = target - current.
4. If complement exists in map, return indices.
5. Else store current value → index.
6. Return {} if no pair found.

## 5. Error Handling
- If input length < 2, return {} gracefully.
- Non-integer inputs undefined by spec.

## 6. Interface
- C++: `std::vector<int> two_sum(const std::vector<int>& nums, int target)`
