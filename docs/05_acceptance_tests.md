# Acceptance Tests - Two Sum

## 1. Goal
Demonstrate that the implemented system satisfies all user requirements across correctness, edge cases, and performance.

## 2. Acceptance Criteria
- Valid pair returned when solution exists.
- Empty output when no solution exists.
- Handles edge cases: empty array, single element, duplicates, negatives, INT boundaries.
- Handles large input (1,000,000 elements) without failure.

## 3. Cases
| AT-ID | Scenario                  | Input                       | Expected  | Result |
|-------|---------------------------|-----------------------------|-----------|--------|
| AT001 | Standard case             | {2, 7, 11, 15}, target=9    | [0, 1]    | PASS   |
| AT002 | Reverse order             | {15, 11, 7, 2}, target=9    | [2, 3]    | PASS   |
| AT003 | Duplicates                | {3, 3}, target=6            | [0, 1]    | PASS   |
| AT004 | No match                  | {1, 2, 3}, target=7         | []        | PASS   |
| AT005 | Negative numbers          | {-3, 4, 1, 2}, target=-1    | [0, 2]    | PASS   |
| AT006 | Large positives           | {1000000, 2000000}, target=3000000 | [0, 1] | PASS |
| AT007 | INT_MAX boundary          | {INT_MAX, 0}, target=INT_MAX | [0, 1]   | PASS   |
| AT008 | INT_MIN boundary          | {INT_MIN, 0}, target=INT_MIN | [0, 1]   | PASS   |
| AT009 | Performance (1M elements) | 0..999999, target=1999997   | valid pair| PASS   |

## 4. Procedure
1. Run `make test` from the project root.
2. Confirm all 22 tests report `[PASS]`.
3. Check the performance test reports a valid pair with execution time shown in ms.
4. Document any failures and repeat after fixes.
