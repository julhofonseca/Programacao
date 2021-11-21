int main(int argc, char *argv[]){
  int numero, i, r;

  printf("Digite o numero cinco para ver a sua tabuada: ");
  scanf("%i", &numero);

  i = 1;

  while(i <= 10){
    r = numero * i;
    printf("%i x %i = %i\n", numero, i, r);
    i = i + 1;
  }
return 0;
}


  
  
