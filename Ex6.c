// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  float Cotacao, QT, Valor;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite a  Cotacao: ");
  scanf("%f", &Cotacao);
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite a Quantidade: ");
  scanf("%f", &QT);
 
  // Faz a multiplicação dos valores obtidos acima
  Valor = Cotacao * QT;
 
  // Exibe o resultado final
  printf(" O valor correspondente em reais e  %.2f", Valor);
 
  return 0;
}
