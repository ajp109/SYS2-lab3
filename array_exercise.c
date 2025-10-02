#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void) {

  // Example list of numbers to sum:
  int16_t list[] = {1,-7,4,6,10,11,3,0,-1};

  // Expected result is 27 with the provided numbers
  printf("The sum of the numbers in the array is: %"PRId32"\n", arraySum(list, 9));

  // Uncomment this when you're ready to write the second function
  // printInt16Array(list, 9);

  return 0;
}

