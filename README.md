# 11402_CS351_Project0

# Two Sum Problem

## Overview
The Two Sum Problem is a classic algorithmic challenge that asks you to find two numbers in an array that add up to a specific target sum. Given an array of integers and a target value, the task is to return the indices of the two numbers that sum to the target, with the constraint that each element can only be used once.

## Key Characteristics
- **Input**: An array of integers and a target integer
- **Output**: Indices of two numbers that sum to the target
- **Constraint**: Each element in the array may only be used once
- **Complexity**: Optimal solutions range from O(n) time with O(n) space to O(n²) time with O(1) space

## Common Approaches
1. **Brute Force**: Check all pairs (O(n²) time)
2. **Hash Map**: Store values in a map for instant lookup (O(n) time, O(n) space)
3. **Two Pointers**: Use sorted array with pointer technique (O(n log n) time, O(1) space)
