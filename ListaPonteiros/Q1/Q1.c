#include <stdio.h>


int main(void){
  //i e j sao as variável que será apontada pelo ponteiro
  int i = 3, j = 5;

  //declaração das variáveis ponteiros p e q
  int *p , *q;

  //atribuindo o endereço das variáveis i e j aos ponteiros p e q
  p = &i;
  q = &j;

  printf("Utilizando ponteiros\n\n");
  printf("Conteudo da variavel i: %d\n", i);
  printf("Conteudo da variavel j: %d\n", j);
  printf("Endereço da variavel i: %d\n", &i);
  printf("Conteudo da variavel ponteiro p: %d\n", p);
  printf("Endereço da variavel j: %d\n", &j);
  printf("Conteudo da variavel ponteiro q: %d\n", q);
  printf("p == &i  =  %d\n", p == &i );
  printf("*p - *q =  %d\n",*p - *q,"\n");
  printf("**&p =  %d\n",**&p,"\n");
  printf("3 - *p/(*q) + 7 =  %d\n",3 - *p/(*q) + 7,"\n");

  return 0 ;
}
