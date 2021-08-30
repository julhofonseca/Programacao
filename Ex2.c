// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  int L, area;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite a  aresta: ");
  scanf("%i", &L);
 
 
  // Faz a multiplicação dos valores obtidos acima
  area = L * L;
 
  // Exibe o resultado final
  printf("A area do quadrado e igual a %i", area);
 
  return 0;
}
