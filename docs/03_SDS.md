# Software Design Specification (SDS) - Two Sum

## 1. Architecture Overview
- `twosum.py`: Python implementation
- `src/main.cpp`: entry point placeholder
- `src/twosum.cpp`: C++ algorithm module (planned)
- `tests/`: pytest suite

## 2. Module Descriptions
### 2.1 Module: two_sum
- Input: `nums: List[int]`, `target: int`
- Output: `List[int]` (2-element list or [])
- Algorithm: One-pass hash map approach.
- Behavior: Iterate through nums, compute complement, check map, store values.

### 2.2 Module: main
- CLI parsing optional; calls `two_sum` using sample data.

## 3. Data Structures
- Python: `dict[int, int]`
- C++: `std::unordered_map<int, int>` and `std::vector<int>`

## 4. Sequence Flow
1. Call `two_sum(nums, target)`.
2. Loop nums with index i.
3. Let complement = target - current.
4. If complement exists, return indices.
5. Else store current.
6. Return [] if none.

## 5. Error Handling
- If input length < 2, return [] gracefully.
- Non-integer inputs undefined by spec.

## 6. Interfaces
- Python: `two_sum(nums: List[int], target: int) -> List[int]`
- C++: `std::vector<int> two_sum(const std::vector<int>& nums, int target)` (planned)
