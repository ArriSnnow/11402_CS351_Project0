# Deployment Guide - Two Sum

## 1. Prerequisites
- Python 3.8+
- pip
- pytest (`pip install pytest`)
- g++ 11+ (optional for C++)

## 2. Setup
- `git clone <repo>`
- `cd 11402_CS351_Project0`
- Optional venv:
  - `python -m venv .venv`
  - `source .venv/bin/activate` (Linux/macOS) or `.\.venv\\Scripts\\activate` (Windows)

## 3. Build
- Python: none.
- C++ (if implemented):
  - `g++ -std=c++20 -o twosum src/main.cpp src/twosum.cpp`

## 4. Run
- Python example:
  - `python -c "from twosum import two_sum; print(two_sum([2,7,11,15], 9))"`
- Tests:
  - `pytest -q`

## 5. CI
- Add GitHub Actions for `pytest` and C++ compile checks.

## 6. Rollback
- `git checkout main` for baseline.
