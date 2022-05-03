/*
Ponteiro para uma fun��o � um ponteiro que aponta durante a execu��o de um c�digo qual fun��o dever� ser executada sem precisar escrever o nome da fun��o explicitamente no ponto do c�digo.
Esses ponteiros nos permitem passar uma fun��o como argumento para outra fun��o.
Um ponteiro para uma fun��o tem a seguinte declara��o:

tipo_de_retorno (*nome_do_ponteiro)();

ou

tipo_de_retorno (*nome_do_ponteiro) (declara��o_de_par�metros);
*/
#include <stdio.h>

//Fun��o simples para soma
int soma(int a, int b) {
  return a + b;
}

int main(){
  int x,y,z;
  //atribuindo valores a x e a y
  x = 5;
  y = 10 ;
  //Criando um ponteiro para fun��o que ele tem em seus parametros 2 inteiros e ir� retornar um s� inteiro
  int (*p) (int , int);
  //atribuindo ao ponteiro a fun��o de soma
  p = soma;
  // chamando o ponteiro de fun��o com nossos parametros
  z = p(x,y);
  // a resposta ser� a aplica��o da soma de x e y
  printf("%d\n", z );
  return 0;
}
