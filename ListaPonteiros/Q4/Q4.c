#include <stdio.h>

int main() {
  int valor;
  int *p1; //criando o ponteiro p1 que armazenara o endereço na memoria de uma variavel inteira
  float temp;
  float *p2;//criando o ponteiro p2 que armazenara o endereço na memoria de uma variavel float
  char aux;
  char *nome = "Ponteiros"; // criou o ponteiro nome do tipo char
  char *p3; // criando o ponteiro p3 do tipo char
  int idade;
  int vetor[3]; // criando um vetor de inteiros com espaço para 3 numeros
  int *p4; // criando o ponteiro p4 do tipo int
  int *p5; // criando o ponteiro p5 do tipo int


  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);
  // como o ponteiro p1 está vinculado com a variavel valor,sendo o endereço dela, e quando alteramos o conteudo de p1 também alteramos o conteudo de valor.
  // irá imprimir o 20 como o esperado

  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);
  // mesma Lógica da letra a) mas aplicando agr com uma variavel float e um ponteiro para armazenar o endereço da variavel float
  // ou seja irá ter alterado o valor de temp para 29.0 como o esperado

  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);
  // a variavel aux passa a assumir o valor do conteudo que o endereço de nome[0] está armazenado
  // irá imprimir o a letra P como o esperado

  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);
  // mesma lógica da letra C mas agora p3 assume o endereço da variavel nome[4] que é o endereço de memoria da letra "e"
  // vai ser impreeso a letra "e" como o esperado

  /* (e) */
  p3 = nome;
  printf("%c \n", *p3);
  // nesse caso o primeiro elemento é a letra "P" e colocamos para imprimir o valor contido no endereço p3 que é exatamente "P"
  // a resposta foi esperada

  /* (f) */
  p3 = p3 +4;
  printf("%c \n", *p3);
  // aqui se usa o ponteiro p3 criado na letra e
  // manipula-se com o ponteiro dentro do vetor de caracteres nome, e se desloca 4 casas para a direita
  // agora o ponteiro p3 é o endereço de memoria da variavel nome[4]
  // quando printamos *p3 estamos imprimindo o conteudo naquele endereço que seria nome[4] que é a letra "e"
  // resposta foi esperada

  /* (g) */
  p3--;
  printf("%c \n", *p3);
  // o ponteiro estava se referindo ao nome[4] caractere "e", mas agora com a manipulação que teve o ponteiro se refere a nome[3] devido ao decremento --
  // na impressao de *p3 o conteudo de p3 agr é o caractere "t"
  // resposta esperada

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);
  // quando pegamos um ponteiro e o direcionamos para um vetor , estamos realmente só pegando o endereço do primeiro elemento do vetor que é o endereço de vetor[0]
  // nesse caso p4 assumiria o endereço da variavel vetor[0] então *p4 que é o conteudo nesse endereço seria igual a 31
  // na impressao sairia a idade que é 34
  // resposta esperada

  /* (i) */
  p5 = p4 +1;
  idade = *p5;
  printf("%d \n", idade);
  // p4 é o endereço da variavel vetor[1] e o ponteiro p5 é o endereço da variavel localizada 1 casa depois no vetor vetor
  // p5 então seria o endereço da variavel vetor[1] e *p5 seria o valor contido naquele endereço.Esse valor é 45
  // a resposta esperada para a idade será de 45

  /* (j) */
  p4 = p5 +1;
  idade = *p4;
  printf("%d \n", idade);
  // o ponteiro p4 agora irá assumir o endereço da variavel vetor[2] ja que p5 + 1 se refere a essa casa
  // a resposta esperada será 27

  /* (l) */
  p4 = p4 -2;
  idade = *p4;
  printf("%d \n", idade);
  // o ponteiro p4 agora se referirá ao endereço da variavel vetor[0] ja que decrementou 2 na posição que se referia antes
  // resposta esperada de 31

  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);
  // p5 agora irá armazenar o endereço da variavel vetor[2] mas que com o decremento de 1, ele na verdade estará assumindo o endereço de vetor[1]
  // na impressao o valor contido em p5 é de 45
  // resposta esperada

  /* (n) */
  p5++;
  printf("%d \n", *p5);
  // basicamente voltar a se referir ao endereço da variavel vetor[2], pois teve um incremento de ++
  // resposta esperada

  return(0);
}
