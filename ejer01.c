//#include <avr/io.h>
#include <stdio.h>

int bis(int x, int m){
  return (x | m );//(1 << (m-1)));
}

int bic(int x, int m){
  return bis(x,m)^ m;//& (~(1 << (m - 1))));
}

/* Calcular x|y usando solo llamadas a las funciones bis y bic */
/*int bool_or(int x, int y) {
int resultado = __________ ;
return resultado;
}*/

/* Calcula x^y usando solo llamadas a las funciones bis y bic */
/*int bool_xor(int x, int y) {
int resultado = __________;
return resultado;
}*/

int main(void){
  int r = bic(10,4);
  int r2 = bis(10,4);
  printf("%d\n",r);
  printf("%d\n",r2);
  return 0;
}
