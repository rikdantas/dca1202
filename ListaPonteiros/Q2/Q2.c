#include <stdio.h>

int main (void) {
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

    //Resultados obtidos supondo que o endere�o era 4094: 4094 7 5 15 9
    //Por�m como n�o conseguimos colocar o endere�o fixado em 4094, quando executarmos o programa, o endere�o mostrado vai ser outro

    //*p � o conteudo que esta no endere�o p, ent�o � o valor de i somado 2, como i � 5, ent�o imprime 7;
    //**&p vai dar o CONTE�DO do CONTE�DO da refer�ncia de p, ent�o imprimimos 5;
    //fazemos o produto de 3 com o valor contido no endere�o p, ent�o fazemos 3*5 e imprimimos 15;
    //Usando a logica do ponto 3, pegamos esse valor e somamos quatro. Mandamos imprimir o valor 9.
}
