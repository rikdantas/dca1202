#include <stdio.h>

int main(void){
  int mat[4] = {1,2,3,4} , *p, x;
  //p = mat + 1; É válida, p é o endereço da variável mat[0+1];
  //p = mat ++; Não é válida, pois não pode se incrementar assim em um vetor;
  //p = ++mat; Não é válida, pois há um erro do operador de incremento;
  //x = (*mat)++ ; (*mat)++; É válida, pois pegamos o valor de mat na primeira casa e somamos 1.
  //printf("%d\n",x );
  return 0;

}
