int main(int argc, char *argv[]){
  float peso, altura, imc;
  char sexo, M, F;
  
  printf("Digite o seu peso: ");
  scanf("%f", &peso);
 
  printf("Digite a sua altura: ");
  scanf("%f", &altura);

  printf("Digite o sexo: ");
  scanf("%s",&sexo);
 
  imc = peso / (altura*altura);


   
  if (imc < 20){
      printf("Abaixo do peso!");
  }
  else if(imc < 25){
      printf("Peso ideal");
  }
  else{
      printf("Acima do peso!");
  }
 
    return 0;
}
