# Traceability Matrix - Two Sum

## Purpose
Connect requirements, design, and tests to ensure coverage and verification.

| Req ID | Requirement | Design Element | Test Cases |
|--------|-------------|----------------|------------|
| FR1 | Accept inputs | two_sum signature | TC001-008 |
| FR2 | Return indices for valid sum | Hash map logic | TC001, TC002, TC007 |
| FR3 | Any valid pair allowed | First-match algorithm | TC001-003 |
| FR4 | No solution empty | End loop fallback | TC004-006 |
| NFR1 | Modular code | Module layout | All |

## Notes
- Each requirement is validated by explicit test cases.
- Any gaps discovered must be addressed with new tests.
