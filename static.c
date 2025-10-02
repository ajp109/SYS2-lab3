#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

static void report_n(void) {
  static uint_fast8_t n = 0;
  n = n + 2;
  printf("n = %"PRIuFAST8"\n", n);
}

int main(void) {
  for (uint_fast8_t i = 0; i < 20; ++i) {
    report_n();
  }
  return 0;
}

