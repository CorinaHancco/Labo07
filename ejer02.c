#include <stdio.h>
#include <inttypes.h>
 
int64_t mult_ok(int x, int y) {
  int64_t p = x*y;
  /* x es 0, o dividir p por x = y */
  return !x || p/x == y;
}

int main(void){
 int64_t resultado = mult_ok(500000,8);
 printf("%" PRId64 "\n",resultado);
 return 0;
}
