#include <stdio.h>

int main(int argc, char *argv[]){
  // Declarando e populando o vetor com 5 posições
  // int numeros[5] = {7, 2, 12, 8, 5};
  
  // Declarando o vetor com 5 posições
  int numeros[10];
  
  // Looping para popular o vetor
  printf("Digite os 10 numeros: ");
  for(int i=0; i<10; i++){
      scanf("%i", &numeros[i]);
  }

  // Looping para exibir os valores do vetor
  printf("Os numeros digitados foram: ");
  for(int i=9; i>=0; i--){
      printf("%i \n",numeros[i]);
  }

  return 0;
}
