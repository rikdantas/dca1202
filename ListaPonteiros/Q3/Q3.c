#include <stdio.h>

int main (void) {
   int i , j;
   int *p , *q;
   //p = i; --> Errada, pois p � um ponteiro que armazena endere�os de vari�veis inteiros e n�o valores;
   q = &j; //--> Certa;
   p = &*&i; //--> Certa;
   //i = (*&)j ; --> Errada porque h� erro de sintaxe, tem que retirar os par�nteses;
   i = *&j; //--> Certa;
   i = *&*&j; //--> Certa;
   //q = *p; --> Errada, pois um ponteiro s� assume endere�os de vari�veis e como *p � um valor armazenado no endere�o p, essa express�o se torna ilegal;
   i = (*p)++ + *q; //--> Certa.

   return 0;
}
