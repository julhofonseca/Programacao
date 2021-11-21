#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{


int Cte, Res;

printf("Entrar com vinte valores em um vetor, multiplicar por uma constante e exibir o resultado");

int numeros[20];

printf("\nDigite os vinte numeros:\n");
for (int i=0; i<20; i++){
    scanf("%i", &numeros[i]);
}
printf("Digite o valor da constante: ");
scanf("%i", &Cte);


printf("O vetor multiplicado pela constante e:\n");
for (int i=0; i<20; i++){ 
    Res=Cte*numeros[i]; 
    printf("%i\n",Res);  
}
return 0;
}