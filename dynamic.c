#include <stdio.h>
#include <stdint.h>

#define ARRAY_SIZE 100

void summarise_uint16_array(uint16_t *array, uint32_t size) {
  uint64_t sum = 0;
  for (uint32_t i = 0; i < size; ++i) {
    sum = sum + array[i];
  }
  double mean = (double)sum / size;
  printf("Array has %"PRIu32" elements.  Mean is %f\n", size, mean);
}


int main(void) {

  uint16_t array[ARRAY_SIZE] = {0};
  
  for (uint32_t i = 0; i < ARRAY_SIZE; ++i) {
    array[i] = i;
  }
  
  summarise_uint16_array(array, ARRAY_SIZE);
  
  return 0;
}

