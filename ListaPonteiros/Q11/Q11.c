#include <stdio.h>

int main(void){
  float aloha[10], coisas[10][5], *pf, value = 2.2;
  int i=3;

  aloha[2] = value; //Válido, atribuiu-se o valor de 2.2 a terceira posição do vetor aloha.

  scanf("%f", &aloha); //Válido, escaneando um float e alocando em um endereço de memória.

  //aloha = value; Inválido, já que não mostra em que posição do array aloha deve-se alocar value.

  printf("%f", aloha); //Válido.

  coisas[4][4] = aloha[3]; //Válido, aloca na matriz coisas de linha 3 e coluna 3 o valor que esta armazenado na quarta posição do array aloha.

  //coisas[5] = aloha; Inválido, pois coisas é uma matriz bidimencional, então precisa-se especificar em que coluna irá armazenar o valor.

  //pf = value; Inválido, pois o ponteiro deveria receber um endereço de memória com "&" antes de value.

  pf = aloha; //Válido, pois o ponteiro pf recebe o endereço de aloha[0] e não precisa especificar que é endereço com o &.
}
