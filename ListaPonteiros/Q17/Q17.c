#include <stdio.h>
#include <stdlib.h>

//criando o void soma com os 4 argumentos, sendo 3 deles vetores criados na int main
void somar(int *vet1 , int *vet2 ,int *vet3 , int num ){
	int i;
	for(i = 0 ; i < num ; i++ ){
		vet3[i] = vet1[i] + vet2[i];
	};
	printf("Vetor resultante da soma dos dois vetores \n");
	for(i = 0 ; i < num ; i++){
		printf("%d\n", vet3[i]);
	};
}
// criando o void preencher para colocar valores dentro dos vetores quando for chamado
void preencher(int *vet , int num){
	int i;
	printf("Coloque os valores do vetor \n");
	for(i = 0 ; i < num ; i++){
		scanf("%d", &vet[i]);
	};
}

int main(){
	int num;
	printf("Digite o numero de termos dos vetores v1 e v2: ");
  	scanf("%d", &num);
  	int vet1[num] , vet2[num] , vet3[num];
  	//chamamos os voids
  	preencher(vet1,num);
  	preencher(vet2 , num);
  	somar(vet1 , vet2 , vet3 , num);

	return 0;
}
