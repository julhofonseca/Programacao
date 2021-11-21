#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main(int argc, char const *argv[])
{

int Fn, F1=-1, F2=1, F3=1;


                
printf("Exbir os vinte primeiros valores da serie de Bergamaschi");

printf("\nPressione qualquer tecla para iniciar: ");
Fn = getch();

for(int i=0; i<20; i++){   
Fn=(F1+F2+F3);
printf("\n%i",Fn);
F3=F2;
F2=F1;
F1=Fn;
}

return 0;
}