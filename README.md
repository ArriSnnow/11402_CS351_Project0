
# Two Sum Project - Planning Phase

## Overview
This repository contains the planning and implementation of the Two Sum algorithm project for CS351.

## Project Objective
The objective of this project is to develop an efficient solution for the Two Sum problem, where given an array of integers and a target sum, we identify two numbers that add up to the target.

## Planning Phase (Current Branch)
**Branch:** `Project Planning (MS11402-3)`

### Key Activities
- Algorithm selection and comparison
- Complexity analysis (time and space)
- Project roadmap definition
- Initial brainstorming and approach documentation

### Algorithm Considerations
- Brute Force approach
- Hash Map/Dictionary approach
- Two Pointer technique

## Project Structure
## Algorithm Analysis & Complexity Discussion

### Comparative Analysis
| Approach | Time Complexity | Space Complexity | Use Case |
|----------|-----------------|------------------|----------|
| Brute Force | O(n²) | O(1) | Small datasets, space-constrained |
| Hash Map | O(n) | O(n) | General purpose, large datasets |
| Two Pointer | O(n log n) | O(1) | Sorted arrays, memory-critical |

### Trade-offs & Selection Rationale
The hash map approach was selected as the primary solution due to its superior average-case performance on random datasets. While it requires additional memory, the linear time complexity significantly outperforms the brute force approach on datasets exceeding 1,000 elements. The two-pointer technique serves as an alternative for pre-sorted data.

### Edge Cases Addressed
- Empty input arrays
- Single-element arrays
- Duplicate values in the array
- Target sum of zero
- Negative integers and mixed-sign arrays
- Integer overflow considerations


## Implementation Details

### Language & Requirements
- ** Standard: C++20 (ISO/IEC 14882:2020).
- ** Compiler: g++-11 or higher / clang-13 or higher.
- ** Key Features Used:
- *** std::vector for dynamic contiguous memory allocation.
- *** std::unordered_map for average $O(1)$ lookup time.
- *** Structured Bindings: To handle map iterations cleanly.
- *** Auto type deduction: For cleaner, more maintainable code.

### Solutions Implemented

#### 1. TwoSumArray : Direct Array-Based Approach (The Memory-Efficient Approach)
- Logic: Uses a nested for loop structure to compare every possible pair.
- Time Complexity: $O(n^2)$ — for each element $i$, we scan all subsequent elements $j$.
- Space Complexity: $O(1)$ — no extra data structures are used.
- Best for: Very small datasets where the overhead of a hash table isn't justified.

#### 2. TwoSumHashTable : Hash Table-Based Approach (STL) (The Speed-Optimized Approach)
- Logic: Uses a "One-Pass" Hash Map strategy. As we iterate, we calculate complement = target - current_value. We check if the complement exists in our std::unordered_map.
- Time Complexity: $O(n)$ average - hash map lookups and insertions are constant time.
- Space Complexity: $O(n)$ - to store the mapping of values to their indices.

## Implementation Requirements
- C++17 standard compliance
- Modular code structure with header/source separation
- Input validation and error handling
- Comprehensive code documentation

## Rigorous Testing Suite
We will implement a testing framework (likely Google Test or a custom assert runner) to validate:
- Target reach with negative integers: e.g., [-5, 1, 4], target -1.
- Zero-sum scenarios: e.g., [0, 4, 3, 0], target 0 (Testing the "cannot use same element" rule).
- Non-existent solutions: Ensuring the program returns an empty vector {} or a clear error code.

## CI/CD Pipeline (GitHub Actions)
The .github/workflows/cpp-ci.yml file will automate:
- Environment Setup: Installing cmake and the C++20 compiler.
- Compilation: Running mkdir build && cd build && cmake .. && make.
- Validation: Executing the compiled test binary.
- Reporting: Blocking Pull Requests if the code fails to compile or tests fail.

## Docker Support
- Multi-stage Dockerfile for optimized image size
- Includes build environment and runtime
- Development and production configurations
- Pre-compiled binaries in container

## Reproducibility with Docker
- To ensure the code runs identically for the professor and the student:
- Base Image: gcc:latest or debian:stable-slim.
- Multi-stage Build:
    - Stage 1: Compile the code using cmake.
    - Stage 2: Copy only the executable to a small image to minimize size.
- Command: docker build -t cs351-project0 .



## Next Steps
1. Finalize algorithm selection
2. Implement solution
3. Write comprehensive tests
4. Optimize and document code

---

*CS351 Project 0*
