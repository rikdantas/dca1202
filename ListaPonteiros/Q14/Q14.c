#include <stdio.h>
#include <stdlib.h>

//a função compare que retorna se o valor é menor,igual ou maior
int compare (const void * a, const void * b)
{
  return ( *(float*)a - *(float*)b );
}

int main(){
  int numero , i , n;
  printf("Digite o numero de termos do vetor de float: ");
  scanf("%d", &numero);
  printf("\n");
  //criando o vetor de floats
  float vet[numero];
  //laço for para alocar valores dentro do array
  for( i = 0 ; i < numero ; i++){
  	printf("Digite um valor  ");
  	scanf("%f" , &vet[i] );
  }

  printf("\n");

  //aplicando a função qsort que fará o trabalho de ordenar os numeros no vetor
  printf("Vetor vet agora ordenado de forma crescente \n");
  qsort (vet, numero , sizeof(float), compare);
  for (i=0; i< numero ; i++){
     printf ("%0.4f \n",vet[i]);
  }
  return 0;
}
