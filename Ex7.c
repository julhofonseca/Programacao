// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  float a, b,c,d,e, Troco, Pgm;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro valor: ");
  scanf("%f", &a);
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite o segundo valor: ");
  scanf("%f", &b);
  
   // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "c"
  printf("Digite o terceiro valor: ");
  scanf("%f", &c);


 // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "d"
  printf("Digite o quarto valor: ");
  scanf("%f", &d);

// Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "d"
  printf("Digite o quarto valor: ");
  scanf("%f", &e);

 // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "d"
  printf("Digite o valor do pagamento: ");
  scanf("%f", &Pgm);

  // Faz a media dos valores obtidos acima
  Troco = Pgm -  (a + b + c + d + e);
 
  // Exibe o resultado final
  printf("O valor do troco e %.2f", Troco);
 
  return 0;
}
