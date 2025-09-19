#include <stdio.h>

int main(void) {

  char array[] = "Hello from the array";
  char * literal = "Hello from the literal";

  printf("array: %s\n", array);
  printf("literal: %s\n", literal);

  printf("array is stored at %p\n", array);
  printf("literal is stored at %p\n", literal);
      
  return 0;
}

