#include <stdio.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i);
  printf("vet[%d] = %.1f",i, vet[i]);
  printf("*(f + %d) = %.1f",i, *(f+i));
  printf("&vet[%d] = %X",i, &vet[i]);
  printf("(f + %d) = %X",i, f+i);
  }

  //Foi obtida as respostas esperadas, o código que criou um ponteiro f, inicialmente se trata do endereço da variavel vet[0],
  //mas com o for, o ponteiro vai se movendo no vetor e assumindo diferentes endereços de acordo com os numeros que vem no array.
}
