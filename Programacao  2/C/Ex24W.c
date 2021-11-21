#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{

char sexo;


printf("\nDigite o Sexo: ");
scanf("%s",&sexo);


while((toupper(sexo)!='F') && (toupper(sexo)!= 'M')){
printf("Erro!\nSomente F ou M. Digite Novamente!: ");
scanf("%s",&sexo);
}
if(sexo =='m' || sexo =='M'){
printf("Sexo Masculino");
}
else {
printf("Sexo Feminino");
}

return 0;
}