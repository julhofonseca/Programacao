#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
int Num=0, A=1, B=1, Soma=0;

                
printf("Calcular e exibir a soma dos N primeiros valores da sequencia 2,5,10,17,26,37,50...");

printf("\nDigite um numero N positivo menor que 100: ");
scanf("%i",&Num);

while(Num<0){
printf("Erro!\nApenas numeros POSITIVOS. Digite novamente: ");
scanf("%i",&Num);
}
while(Num>=100){
printf("Erro!\nApenas numeros MENORES que 100. Digite novamente: ");
scanf("%i",&Num);
}

for (int i=0; i<Num; i++) {
A=A+B;
B=B+2;
printf("%i\n",A);
Soma=Soma+A; 
}

printf("Resultado da soma dos N primeiros valores da sequencia: %i",Soma);
return 0;
}