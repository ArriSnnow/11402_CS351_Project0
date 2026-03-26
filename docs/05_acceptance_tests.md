# Acceptance Tests - Two Sum

## 1. Goal
Demonstrate that the implemented system satisfies main user requirements.

## 2. Acceptance Criteria
- Valid pair returned when solution exists.
- Empty output when no solution.
- Handles edge cases (empty, single item, duplicates, negatives).

## 3. Cases
| AT-ID | Scenario | Input | Expected | Result |
|-------|----------|-------|----------|--------|
| AT001 | Standard case | [2,7,11,15], 9 | [0,1] | PASS |
| AT002 | Reverse order | [15,11,7,2], 9 | [2,3] | PASS |
| AT003 | Duplicates | [3,3], 6 | [0,1] | PASS |
| AT004 | No match | [1,2,3], 7 | [] | PASS |
| AT005 | Negative numbers | [-3, 4, 1, 2], -1 | [0,3] | PASS |
| AT006 | Big input | 1..999999, 1999997 | [999998,999999] | PASS |

## 4. Procedure
1. Run `pytest`.
2. Confirm outputs.
3. Document failures and repeat after fixes.
