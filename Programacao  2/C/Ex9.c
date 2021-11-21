# include <stdio.h>
 
int main(int argc, char *argv[]){
  float a,b;

printf("Digite o primeiro valor: ");
  scanf("%f", &a);
 
  printf("Digite o segundo valor: ");
  scanf("%f", &b);
 
  if (a>b){
      printf("O maior valor e %.2f", a);
  }
  else{
      printf("O maior valor e %.2f", b);
  }
  
  return 0;
}
