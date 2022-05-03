#include <stdio.h>


int main(void){
  //i e j sao as vari�vel que ser� apontada pelo ponteiro
  int i = 3, j = 5;

  //declara��o das vari�veis ponteiros p e q
  int *p , *q;

  //atribuindo o endere�o das vari�veis i e j aos ponteiros p e q
  p = &i;
  q = &j;

  printf("Utilizando ponteiros\n\n");
  printf("Conteudo da variavel i: %d\n", i);
  printf("Conteudo da variavel j: %d\n", j);
  printf("Endere�o da variavel i: %d\n", &i);
  printf("Conteudo da variavel ponteiro p: %d\n", p);
  printf("Endere�o da variavel j: %d\n", &j);
  printf("Conteudo da variavel ponteiro q: %d\n", q);
  printf("p == &i  =  %d\n", p == &i );
  printf("*p - *q =  %d\n",*p - *q,"\n");
  printf("**&p =  %d\n",**&p,"\n");
  printf("3 - *p/(*q) + 7 =  %d\n",3 - *p/(*q) + 7,"\n");

  return 0 ;
}
