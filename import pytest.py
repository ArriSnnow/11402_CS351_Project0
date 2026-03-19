import pytest
from twosum import two_sum

def test_two_sum_basic():
    assert two_sum([2, 7, 11, 15], 9) == [0, 1]


def test_two_sum_different_indices():
    assert two_sum([3, 2, 4], 6) == [1, 2]


def test_two_sum_no_solution():
    assert two_sum([1, 2, 3], 10) == []


def test_two_sum_negative_numbers():
    assert two_sum([-1, -2, -3, 5], 2) == [2, 3]


def test_two_sum_single_pair():
    assert two_sum([1, 5], 6) == [0, 1]


def test_two_sum_duplicates():
    assert two_sum([3, 3], 6) == [0, 1]


def test_two_sum_empty_list():
    assert two_sum([], 5) == []


def test_two_sum_single_element():
    assert two_sum([5], 10) == []


def test_two_sum_zero_target():
    assert two_sum([-5, 5, 3], 0) == [0, 1]


def test_two_sum_large_numbers():
    assert two_sum([1000000, 2000000, 3000000], 3000000) == [0, 1]