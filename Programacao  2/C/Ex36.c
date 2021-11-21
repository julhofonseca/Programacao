#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
int Cte;

printf("Entrar com vinte valores, multiplicar por uma constante e armazenar em outro vetor");

int vx[20];
int vy[20];

printf("\nDigite 20 numeros:\n");
for (int i=0; i<20; i++){
    scanf("%i", &vx[i]);
}
printf("Digite a constante: ");
scanf("%i", &Cte);

printf("\nExibindo vetor x:\n");
for (int i=0; i<20; i++){
    printf("%i\n",vx[i]);
}
printf("\nResultado do vetor y:\n");
for (int i=0; i<20; i++){ 
    vy[i] = Cte * vx[i]; 
    printf("%i\n",vy[i]);  
}
return 0;
}