#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void) {

  int64_t x = 6;
  int32_t array[] = {9,8,7,6,5,4,3,2,1,0};

  printf("x is located at address %p\n", (void *)&x);
  printf("array is located at address %p\n", (void *)&array);

  return 0;
}

