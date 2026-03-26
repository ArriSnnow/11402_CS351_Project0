# Known Issues - Two Sum

1. `src/twosum.cpp` lacks an implementation in this branch.
2. `src/main.cpp` has no CLI-driven path and may be a skeleton.
3. `two_sum` returns first valid match; deterministic ordering is undefined.
4. Type validation is minimal (integers only required by spec).
5. Large-array Python execution may exceed memory for >10M elements.

## Workarounds
- Use Python implementation for correctness and unit tests
- Expand to C++ with dedicated input checks for critical deployment
- Add strict type-checking wrapper if runner input is untrusted
