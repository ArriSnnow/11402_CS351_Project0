# Test Plan - Two Sum

## 1. Objectives
Validate functional correctness and robustness through unit and acceptance tests.

## 2. Test Types
- Unit Testing (pytest)
- Integration testing (CLI or C++ driver)
- Regression testing (automated at commit)

## 3. Tools
- `pytest` for Python tests
- `g++`/`clang++` for C++ builds

## 4. Test Cases
| ID | Description | Input | Expected Output |
|----|-------------|-------|-----------------|
| TC001 | Basic solution | [2,7,11,15], 9 | [0,1] |
| TC002 | Duplicate values | [3,3], 6 | [0,1] |
| TC003 | Mixed signs | [-1,2,3], 1 | [0,1] |
| TC004 | No solution | [1,2,3], 7 | [] |
| TC005 | Empty array | [], 5 | [] |
| TC006 | Single element | [5], 5 | [] |
| TC007 | Zero target | [0,4,3,0], 0 | [0,3] |
| TC008 | Large input perf | range(1_000_000), 1_999_997 | [999_998,999_999] |

## 5. Execution
- run `pytest -q`.
- Additional manual check:
  - `python -c "from twosum import two_sum; print(two_sum([2,7,11,15], 9))"`

## 6. Entry/Exit Criteria
Entry: Source is ready and code compiles.
Exit: All planned tests pass. Document any failures.
