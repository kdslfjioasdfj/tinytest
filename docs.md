# TinyTest documentation

## Variables

### tinytest_test_failed

- Type: `int`
- Description: This indicates whether a test has failed already. Is `1` if a test has previously failed. Otherwise is `0` (if no tests have failed yet).

## Functions

### tinytest_expect

- Signature: `int tinytest_expect(int cond)`
- Parameter(s):
  1. `int cond`: The condition to evaluate. `0` is considered as false, everything else is considered as true.
- Returns: Whether the test failed or not. If `int cond` was false (`0`), this function returns `1`. Otherwise it returns `0`.
- Notes: This does not crash the test program. It simply sets `tinytest_test_failed` to `1`.

### tinytest_assert

- Signature: `void tinytest_assert(int cond)`
- Parameter(s):
  1. `int cond`: The condition to evaluate. `0` is considered false, everything else is considered as true.
- Returns: _No value (`void`)._
- Notes: This function does crash the test program on failure (when `int cond` is false).
