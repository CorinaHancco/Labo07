//#include <avr/io.h>
#include <stdio.h>

int bis(int x, int m){
  return (x | m );
}

int bic(int x, int m){
  return bis(x,m)^ m;
}

// Calcular x|y usando solo llamadas a las funciones bis y bic */
int bool_or(int x, int y) {
  int resultado = bis(x,y);
  return resultado;
}

//Calcula x^y usando solo llamadas a las funciones bis y bic */
int bool_xor(int x, int y) {
  int resultado = bic(bis(x,y),bic(x,y)^x);
  return resultado;
}

int main(void){
  int r1 = bis(10,4);
  int r2 = bic(10,4);
  int r3 = bool_or(15,4);
  int r4 = bool_xor(15,4);
  printf("%d\n",r1);
  printf("%d\n",r2);
  printf("%d\n",r3);
  printf("%d\n",r4);
  return 0;
}
