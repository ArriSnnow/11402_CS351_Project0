# Known Issues - Two Sum

1. `src/main.cpp` has no CLI-driven path; uses hardcoded sample data only.
2. `two_sum` returns the first valid match found; if multiple pairs exist, result is implementation-defined.
3. Type validation is minimal (integers only, as required by spec).
4. No upper bound check on input size; very large arrays may exhaust heap memory.

## Workarounds
- For production use, add input size guard before calling `two_sum`.
- Accept the first-match behavior as correct per spec; document if determinism is ever required.
