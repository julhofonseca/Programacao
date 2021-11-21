#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main(int argc, char const *argv[])
{

int Fn, F1=1, F2=0;
                      
printf(" Exibir os trinta primeiros numeros da serie de fibonacci");

printf("\nPressione qualquer tecla para iniciar: ");
getch();

for(int i=0; i<30; i++){
Fn=F1+F2;
printf("\n%i",Fn);
F1=F2;
F2=Fn;
}

return 0;
}