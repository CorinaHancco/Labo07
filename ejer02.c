#include <stdio.h>
#include <inttypes.h>
 
int64_t mult_ok(int64_t x, int64_t y) {
  int64_t p = x*y;
  return !x || (p <= INT64_MAX) && (p > 0);
}

int main(void){
 int64_t resultado = mult_ok(500000000,8);
 printf("%" PRId64 "\n",resultado);
 return 0;
}
