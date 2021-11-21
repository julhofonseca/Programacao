int main(int argc, char *argv[]){
  int numero, i, r;
char opcao = 's';

 while (opcao == 's' || opcao =='s')
 {

  printf("\nDigite o numero  para ver a sua tabuada: ");
  scanf("%i", &numero);


  i = 1;

  while(i <= 10){
    r = numero * i;
    printf("%i x %i = %i\n", numero, i, r);
    i = i + 1;
  }

  printf("Deseja repetir o programa- s/n?");
  
  opcao = getche();
  
 }


return 0;
}