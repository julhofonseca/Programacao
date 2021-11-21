#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(int argc, char const *argv[])
{

int i,j, Cons, Res, Linhas, Colunas, Valor=0;

int **Numeros;
do
{
system("cls");


printf("\nDigite a quantidade de linhas no maximo 10: ");
scanf("%i", &Linhas);

while(Linhas>10 || Linhas<0){
printf("Erro!\nDigite qtde de linhas novamente: ");
scanf("%i",&Linhas);
}

printf("Digite a quantidade de colunas no maximo 10: ");
scanf("%i", &Colunas);

while(Colunas>10 || Colunas<0){
printf("Erro!\nDigite qtde de colunas novamente: ");
scanf("%i",&Colunas);
}
Numeros = (int**)malloc(Linhas*sizeof(int));

for(int i=0; i<Linhas; i++){
Numeros[i]= (int*)malloc(Colunas*sizeof(int));
}

printf("Digite os numeros para matriz %i x %i\n", Linhas, Colunas);
for(int i=0; i<Linhas; i++){
    for(int j=0; j<Colunas; j++){
     scanf("%i", &Numeros[i][j]);
    }
}
printf("Os numeros digitados na matriz foram:\n");
for(int i=0; i<Linhas; i++){
   for(int j=0; j<Colunas; j++){
       printf(" %i  ", Numeros[i][j]);
   } 
printf("\n");
}

printf("\nDigite um numero para consulta: ");
scanf("%i", &Cons);


for(int i=0; i<Linhas; i++){
    for(int j=0; j<Colunas; j++)
  
   if (Cons==Numeros[i][j]){ 
       printf("\nO Numero %i se encontra na Linha %i e na Coluna %i do vetor matriz",Cons,i,j);
   }

   else {Valor++; 
   }

   if(Valor==Linhas){     
   } 
    printf("\nValor nao encontrado!\n");
    Valor=0;
   }
printf("\nDigite 1 para nova consulta ou 2 para sair: ");
scanf("%i",&Res); 
   }while(Res !=2);
   return 0;
   }