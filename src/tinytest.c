#include "tinytest.h"
#include <stdlib.h>

int tinytest_test_failed = 0;

int tinytest_expect(int cond) {
  if (!cond)
    tinytest_test_failed = 1;
  return !cond;
}

void tinytest_assert(int cond) {
  if (!cond) {
    tinytest_test_failed = 1;
    exit(1);
  }
}
