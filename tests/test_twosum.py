import pytest
from twosum import two_sum

@pytest.mark.parametrize("nums,target,expected", [
    ([2, 7, 11, 15], 9, [0, 1]),
    ([3, 3], 6, [0, 1]),
    ([-1, 2, 3], 1, [0, 1]),
    ([1, 2, 3], 7, []),
    ([], 5, []),
    ([5], 5, []),
    ([0, 4, 3, 0], 0, [0, 3]),
])
def test_two_sum(nums, target, expected):
    result = two_sum(nums, target)
    if expected:
        assert len(result) == 2
        assert nums[result[0]] + nums[result[1]] == target
    else:
        assert result == []

