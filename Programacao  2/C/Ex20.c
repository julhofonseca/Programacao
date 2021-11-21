#include <stdio.h>
 
int main(int argc, char *argv[]){
  float a, b,M;
  
  printf("\n Digite a nota da P1: ");
  scanf("%f", &a);

  printf("Digite a nota da P2: ");
  scanf("%f", &b);

  

  M= (a + (2*b)) / 3;

  if (M>=5){

      printf("Aluno Aprovado");
  }

else{

  printf( " Aluno Reprovado");
}

return 0;

 
}
