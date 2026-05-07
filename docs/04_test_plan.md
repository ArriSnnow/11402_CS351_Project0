# Test Plan - Two Sum

## 1. Objectives
Validate functional correctness and robustness through unit and acceptance tests.

## 2. Test Types
- Unit Testing (C++ test binary)
- Performance testing (large input, worst-case pair position)
- Regression testing (automated via GitHub Actions CI on every push)

## 3. Tools
- `g++` (C++17) for building
- `make test` to compile and run the test suite
- GitHub Actions for automated CI

## 4. Test Cases

### Correctness Tests
| ID    | Description               | Input                      | Target    | Expected Output |
|-------|---------------------------|----------------------------|-----------|-----------------|
| TC001 | Basic pair                | {2, 7, 11, 15}             | 9         | [0, 1]          |
| TC002 | Duplicate values          | {3, 3}                     | 6         | [0, 1]          |
| TC003 | Negative numbers          | {-1, 2, 3}                 | 1         | [0, 1]          |
| TC004 | No valid pair             | {1, 2, 3}                  | 7         | []              |
| TC005 | Empty array               | {}                         | 5         | []              |
| TC006 | Single element            | {5}                        | 5         | []              |
| TC007 | Zeros sum to zero         | {0, 4, 3, 0}               | 0         | [0, 3]          |
| TC008 | Two elements match        | {4, 6}                     | 10        | [0, 1]          |
| TC009 | Two elements no match     | {4, 6}                     | 11        | []              |
| TC010 | Large positives           | {1000000, 2000000}         | 3000000   | [0, 1]          |
| TC011 | Large negatives           | {-1000000, -2000000}       | -3000000  | [0, 1]          |
| TC012 | Mixed large               | {-999999, 1000000}         | 1         | [0, 1]          |
| TC013 | Large no match            | {1000000, 2000000}         | 9999999   | []              |
| TC014 | INT_MAX + 0               | {INT_MAX, 0}               | INT_MAX   | [0, 1]          |
| TC015 | INT_MIN + 0               | {INT_MIN, 0}               | INT_MIN   | [0, 1]          |
| TC016 | Negative target           | {-3, -1, 2}                | -4        | [0, 1]          |
| TC017 | Negative target no match  | {1, 2, 3}                  | -1        | []              |
| TC018 | Pair at end               | {10, 20, 30, 3, 7}         | 10        | [3, 4]          |
| TC019 | All same values match     | {5, 5, 5, 5}               | 10        | [0, 1]          |
| TC020 | All same values no match  | {5, 5, 5, 5}               | 11        | []              |
| TC021 | Non-zero pair sums to zero| {-7, 3, 7}                 | 0         | [0, 2]          |

### Performance Test
| ID    | Description                        | Input                          | Target  | Expected          |
|-------|------------------------------------|--------------------------------|---------|-------------------|
| TC022 | 1,000,000 elements, pair at end    | 0..999999 (sequential ints)    | 1999997 | valid pair found  |

## 5. Execution
```
make test
```
All 22 tests run automatically. Exit code 0 = all passed.

## 6. Entry/Exit Criteria
- Entry: Source compiles cleanly with `make`.
- Exit: All 22 tests pass with 0 failures.
