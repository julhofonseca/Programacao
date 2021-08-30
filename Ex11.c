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
  else if (b>a) { 
      printf("O maior valor e %.2f", b);
  }
  else {
printf("Os numeros sao identicos");
}
  return 0;
}
