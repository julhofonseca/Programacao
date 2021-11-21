#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{

int i,Res,Qtd,Cons,Valor=0;

int *Numeros;

do
{
system("cls");
printf("Armazenar um  maximo de vinte valores e criar uma rotina de consulta exibindo a posicao no vetor");

printf("\nDigite a quantidade de valores: ");
scanf("%i", &Qtd);


while(Qtd>20 || Qtd<0){
printf("Erro!\nFora da faixa possivel de valores. Digite novamente: ");
scanf("%i",&Qtd);
}

Numeros = (int*)malloc(Qtd*sizeof(int));


printf("Digite os numeros:\n");
for(i=0; i<Qtd; i++){
    scanf("%i", &Numeros[i]);
}

printf("Digite um numero para consulta: ");
scanf("%i", &Cons);

for(i=0; i<Qtd; i++){ 

   if (Cons==Numeros[i]){ 
       printf("O Numero %i se encontra na Posicao %i do vetor", Cons,i);
   }

   else {Valor++; 
   }

   if(Valor==Qtd){
       printf("Valor nao encontrado!");
       Valor=0; 
   }
}
printf("\nDigite 1 para nova consulta ou 2 para sair: ");
    scanf("%i",&Res); 
}while(Res !=2);

return 0;
}