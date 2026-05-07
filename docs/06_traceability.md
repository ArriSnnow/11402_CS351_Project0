# Traceability Matrix - Two Sum

## Purpose
Connect requirements, design, and tests to ensure full coverage and verification.

| Req ID | Requirement                        | Design Element              | Test Cases                        |
|--------|------------------------------------|-----------------------------|-----------------------------------|
| FR1    | Accept array of ints + target      | `two_sum` signature         | TC001–TC022                       |
| FR2    | Return indices for valid pair      | Hash map lookup             | TC001–TC003, TC007–TC012, TC014–TC016, TC018–TC019, TC021 |
| FR3    | Any valid pair is acceptable       | First-match algorithm       | TC001–TC003, TC019                |
| FR4    | Return empty when no pair exists   | End-of-loop fallback        | TC004–TC006, TC009, TC013, TC017, TC020 |
| FR5    | Handle edge case: empty array      | Size guard in loop          | TC005                             |
| FR6    | Handle edge case: single element   | Size guard in loop          | TC006                             |
| FR7    | Handle negative numbers            | Hash map with signed ints   | TC003, TC011, TC012, TC015–TC017, TC021 |
| FR8    | Handle INT_MAX / INT_MIN values    | `int` type range            | TC014, TC015                      |
| NFR1   | O(n) time complexity               | `std::unordered_map`        | TC022 (performance)               |
| NFR2   | Modular code structure             | `twosum.h` / `twosum.cpp`  | All                               |
| NFR3   | Automated regression testing       | GitHub Actions CI           | All (on every push)               |

## Notes
- Each requirement is validated by at least one explicit test case.
- TC022 serves as the performance acceptance test for NFR1.
- Any gaps discovered must be addressed with new tests before merge.
