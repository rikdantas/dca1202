#include <stdio.h>

int main(void){
  int mat[4] = {1,2,3,4} , *p, x;
  //p = mat + 1; � v�lida, p � o endere�o da vari�vel mat[0+1];
  //p = mat ++; N�o � v�lida, pois n�o pode se incrementar assim em um vetor;
  //p = ++mat; N�o � v�lida, pois h� um erro do operador de incremento;
  //x = (*mat)++ ; (*mat)++; � v�lida, pois pegamos o valor de mat na primeira casa e somamos 1.
  //printf("%d\n",x );
  return 0;

}
