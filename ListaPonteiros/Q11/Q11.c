#include <stdio.h>

int main(void){
  float aloha[10], coisas[10][5], *pf, value = 2.2;
  int i=3;

  aloha[2] = value; //V�lido, atribuiu-se o valor de 2.2 a terceira posi��o do vetor aloha.

  scanf("%f", &aloha); //V�lido, escaneando um float e alocando em um endere�o de mem�ria.

  //aloha = value; Inv�lido, j� que n�o mostra em que posi��o do array aloha deve-se alocar value.

  printf("%f", aloha); //V�lido.

  coisas[4][4] = aloha[3]; //V�lido, aloca na matriz coisas de linha 3 e coluna 3 o valor que esta armazenado na quarta posi��o do array aloha.

  //coisas[5] = aloha; Inv�lido, pois coisas � uma matriz bidimencional, ent�o precisa-se especificar em que coluna ir� armazenar o valor.

  //pf = value; Inv�lido, pois o ponteiro deveria receber um endere�o de mem�ria com "&" antes de value.

  pf = aloha; //V�lido, pois o ponteiro pf recebe o endere�o de aloha[0] e n�o precisa especificar que � endere�o com o &.
}
