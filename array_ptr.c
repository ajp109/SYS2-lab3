#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void) {

  int16_t numbers[] = {1,3,5,7,9};

  numbers[0] = 11;
  numbers[3] = 42;

  for (uint_fast8_t i = 0; i < 5; ++i) {
      printf("numbers[%"PRIuFAST8"] = %"PRId16"\n", i, numbers[i]);
  }

  return 0;
}

