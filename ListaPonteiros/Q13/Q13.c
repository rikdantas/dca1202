#include <stdio.h>
#include <stdlib.h>

//void que ordena o vetor vet da forma crescente , tem dois argumentos um � o vetor vet e o outro � a quantidade de termos
//usando a manipula��o de vet[i] durante a fun��o
//essa manipula��o tamb�m poderia ser feita *(vet + i)
void ordenar(float *vet , int n){
	int i , j , cont = 0 , aux ;
	for(i = 0 ; i < n ; i++ ){
		aux = vet[i];
		for(j = cont ; j < n ; j++){
			if(vet[i] > vet[j] ){
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
		cont++ ;
	}
}

int main(){
  int numero , i;
  printf("Digite o numero de termos do vetor de float: ");
  scanf("%d", &numero);
  printf("\n");
  //criando o vetor de floats
  float vet[numero];
 	//la�o for para alocar valores dentro do array
  for( i = 0 ; i < numero ; i++){
  	printf("Digite um valor  ");
  	scanf("%f" , &vet[i] );
  }
  printf("\n");
  //chamando a fun��o ordenar
  ordenar(vet , numero);
  printf("Vetor vet agora ordenado de forma crescente \n");
  for( i = 0 ; i < numero ; i++){
  	printf("%f\n" , vet[i]);
  }
  return 0;
}
