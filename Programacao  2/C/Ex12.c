# include <stdio.h>
 
int main(int argc, char *argv[]){
  float h,b, a;

printf("Digite o valor da base: ");
  scanf("%f", &b);
 
  printf("Digite o valor da altura: ");
  scanf("%f", &h);

  a = b*h;
 
  if  (a>100){
      printf("Terreno Grande ");
  }
  else { 
      printf(" A area do retanguo e %.2f", a);

}
  return 0;
}
