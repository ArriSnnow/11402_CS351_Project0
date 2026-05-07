# Project Plan - Two Sum

## Objective
Deliver a production-quality Two Sum implementation with full technical documentation, testing, and deployment guidance. Support academic requirements for CS351 by clearly mapping requirements to design and verification artifacts.

## Scope
- Implement hashing-based linear-time Two Sum solution in C++.
- Provide project artifacts: SRS, SDS, Test Plan, Acceptance Tests, Traceability, Deployment, Known Issues.
- Perform unit tests and acceptance tests across edge cases.
- Document architecture, APIs, and usage patterns.

## Work Breakdown
1. Requirements collection (SRS)
2. System design and module definitions (SDS)
3. Implementation of algorithm (`src/twosum.cpp`, `src/twosum.h`)
4. Testing plan and case definition
5. Unit tests development (`tests/test_twosum.cpp`)
6. Acceptance and traceability documentation
7. Deployment instructions and environment setup (`Makefile`, GitHub Actions)
8. Final review and known issue log

## Timeline
- Day 1: SRS + SDS
- Day 2: C++ implementation
- Day 3: Unit tests + test plan
- Day 4: Acceptance tests + traceability
- Day 5: Deployment docs + final polish

## Roles and Responsibilities
- Developer (self): code, test, write documentation
- Reviewer: run tests, validate requirements, provide feedback for improvement

## Risk Management
- Risk: Undefined or changing requirement.
  - Mitigation: Use this controlled SRS and confirm scope with instructor.
- Risk: Incorrect edge case handling.
  - Mitigation: Increase unit test coverage and automate test execution via CI.
- Risk: Build environment differences.
  - Mitigation: Provide explicit dependency list (g++ 11+) and Makefile.

## Success Criteria
- All unit tests pass (`make test`).
- CI pipeline passes on every push.
- All documentation artifacts are complete and consistent with implementation.
- Algorithm accepts an array of integers and a target integer, returning a 2-element index pair or empty on no match.
