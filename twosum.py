def two_sum(nums, target):
    """
    Find two numbers in the list that add up to the target.
    
    Args:
        nums: List of integers
        target: Target sum
    
    Returns:
        List of two indices where nums[i] + nums[j] == target
        Returns empty list if no valid pair exists
    """
    seen = {}
    
    for i, num in enumerate(nums):
        complement = target - num
        
        if complement in seen:
            return [seen[complement], i]
        
        seen[num] = i
    
    return []