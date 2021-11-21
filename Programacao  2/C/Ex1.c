// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  int b, h, area;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite a  base: ");
  scanf("%i", &b);
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite a altura: ");
  scanf("%i", &h);
 
  // Faz a multiplicação dos valores obtidos acima
  area = b * h;
 
  // Exibe o resultado final
  printf("A area do retangulo e igual a %i", area);
 
  return 0;
}
