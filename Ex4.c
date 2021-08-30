// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  int a, b,c,d, media;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro valor: ");
  scanf("%i", &a);
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite o segundo valor: ");
  scanf("%i", &b);
  
   // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "c"
  printf("Digite o terceiro valor: ");
  scanf("%i", &c);


 // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "d"
  printf("Digite o quarto valor: ");
  scanf("%i", &d);

 
  // Faz a media dos valores obtidos acima
  media = (a + b + c + d)/4;
 
  // Exibe o resultado final
  printf("A media dos valores e igual a %i", media);
 
  return 0;
}
