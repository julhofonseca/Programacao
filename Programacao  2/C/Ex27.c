#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{

int num, A, B, res;

                    
printf("\nDigite um numero positivo para a tabuada: ");
scanf("%i",&num);

while(num<=0){
printf("Erro!\nApenas numeros positivos. Digite novamente: ");
scanf("%i",&num);
}

printf("\nDigite o inicio do intervalo da tabuada: ");
scanf("%i",&A);

printf("\nDigite o fim do intervalo da tabuada: ");
scanf("%i",&B);

while(B<A){
printf("Erro!\nFim do Intervalo deve ser maior que o inicio. Digite novamente o fim do intervalo: ");
scanf("%i",&B);    
}


for (int i=B; i>=A; i=i-1) {
res = num * i; 
printf("%i x %i = %i\n", num, i, res);
}
return 0;

}