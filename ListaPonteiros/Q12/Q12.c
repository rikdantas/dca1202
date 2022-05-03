/*
Ponteiro para uma função é um ponteiro que aponta durante a execução de um código qual função deverá ser executada sem precisar escrever o nome da função explicitamente no ponto do código.
Esses ponteiros nos permitem passar uma função como argumento para outra função.
Um ponteiro para uma função tem a seguinte declaração:

tipo_de_retorno (*nome_do_ponteiro)();

ou

tipo_de_retorno (*nome_do_ponteiro) (declaração_de_parâmetros);
*/
#include <stdio.h>

//Função simples para soma
int soma(int a, int b) {
  return a + b;
}

int main(){
  int x,y,z;
  //atribuindo valores a x e a y
  x = 5;
  y = 10 ;
  //Criando um ponteiro para função que ele tem em seus parametros 2 inteiros e irá retornar um só inteiro
  int (*p) (int , int);
  //atribuindo ao ponteiro a função de soma
  p = soma;
  // chamando o ponteiro de função com nossos parametros
  z = p(x,y);
  // a resposta será a aplicação da soma de x e y
  printf("%d\n", z );
  return 0;
}
