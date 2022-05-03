#include <stdio.h>

int main (void) {
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

    //Resultados obtidos supondo que o endereço era 4094: 4094 7 5 15 9
    //Porém como não conseguimos colocar o endereço fixado em 4094, quando executarmos o programa, o endereço mostrado vai ser outro

    //*p é o conteudo que esta no endereço p, então é o valor de i somado 2, como i é 5, então imprime 7;
    //**&p vai dar o CONTEÚDO do CONTEÚDO da referência de p, então imprimimos 5;
    //fazemos o produto de 3 com o valor contido no endereço p, então fazemos 3*5 e imprimimos 15;
    //Usando a logica do ponto 3, pegamos esse valor e somamos quatro. Mandamos imprimir o valor 9.
}
