#include <stdio.h>

int main(void){
  //Aqui tem presente os dois c�digos onde cada um tem seus printf nos for
  int vet[] = {4,9,13};
  int i;
  //Codigo 1
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i));
  }
  printf("\n");
  //Imprime o conte�do que tem no array "vet" de acordo com o incremento i.


  //C�digo 2
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
  //Imprime os endere�os dos valores presentes dentro do array "vet".
}
