int main(int argc, char *argv[]){
  int a,b;

  
  
  printf("Digite o primeiro numero: ");
  scanf("%i", &a);

  printf("Digite o segundo numero: ");
  scanf("%i", &b);

 while(b <=a ){
    printf("Erro! O segundo numero deve ser maior que o primeiro. Digite novamente o segundo numero: ");
  
    scanf("%i", &b);
 }

 printf("Obrigado");

return 0;

  }