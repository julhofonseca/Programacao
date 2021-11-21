#include <stdio.h>
 
int main(int argc, char *argv[]){
  float a, b, c, t,R,X;
  
  printf("\n Digite o tamanho do lado 01: ");
  scanf("%f", &a);

  printf("Digite o tamanho do lado 02: ");
  scanf("%f", &b);

  printf("Digite o tamanho do lado 03: ");
  scanf("%f", &c);
  

  R=(b*b) + (c*c);

  X=(a*a);

if (R==X){

  printf("E um triangulo retangulo");
}

else{

  printf( "Nao e um triangulo retangulo");
}

return 0;

 
}





   

  




  



