#include <stdio.h>

int main(void){
  int i;
  //Aqui tem todos os casos, basta retirar as barras (//) de comentario para ver rodando com o caso do vetor sendo do tipo desejado
  char x[4] = "Casa";
  //int x[4] = {1,2,3,4};
  //float x[4] = {1.1 , 2.2 , 3.3 , 4.4}
  //double x[4] = {1.111111 , 2.222222 ,3.3333333 , 4.44444444 }

  for(i = 0 ; i < 4; i++){
    printf("%d\n", x+i);
  }

  //supondo que x[0] está no endereço 4092, o que o programa imprimiu bate com o que era idealizado

}
