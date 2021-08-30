// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  int C, Fahrenheit;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite a temperatura em graus Celsius: ");
  scanf("%i", &C);
 
  // Faz o calculo em fahrenheit
    Fahrenheit = C * 33.8;
 
  // Exibe o resultado final
  printf("A temperatura  em fahrenheite e igual a %i", Fahrenheit);
 
  return 0;
}
