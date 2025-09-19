#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void) {

  int32_t array[10];

  array[4] = 5;

  printf("The value stored in array[4] is %"PRId32"\n", array[4]);

  return 0;
}

