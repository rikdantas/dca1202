#include <stdio.h>

int main (void) {
   int i , j;
   int *p , *q;
   //p = i; --> Errada, pois p é um ponteiro que armazena endereços de variáveis inteiros e não valores;
   q = &j; //--> Certa;
   p = &*&i; //--> Certa;
   //i = (*&)j ; --> Errada porque há erro de sintaxe, tem que retirar os parênteses;
   i = *&j; //--> Certa;
   i = *&*&j; //--> Certa;
   //q = *p; --> Errada, pois um ponteiro só assume endereços de variáveis e como *p é um valor armazenado no endereço p, essa expressão se torna ilegal;
   i = (*p)++ + *q; //--> Certa.

   return 0;
}
