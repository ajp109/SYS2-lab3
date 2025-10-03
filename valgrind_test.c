#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>

typedef struct {
  int16_t x;
  int16_t y;
} IntVector;

void report(IntVector *v) {
  printf("x: %"PRId16", y: %"PRId16"\n", v->x, v->y);
}

int main(void) {

  IntVector *v = calloc(1, sizeof(IntVector));
  v->x = 5;
  v->y = 3;
  
  report(v);
  report(v);
  
  free(v);

  return 0;
}

