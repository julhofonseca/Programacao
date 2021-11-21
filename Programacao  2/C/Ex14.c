# include <stdio.h>
 
int main(int argc, char *argv[]){
  float c,b, a;

printf("Digite o primeiro valor");
  scanf("%f", &a);
 
  printf("Digite o segundo valor");
  scanf("%f", &b);
  
  printf(" Digite o terceiro valor");
  scanf("%f", &c);
 
  if  (a>b){   
  }
   if (a>c){ 

      printf("%.2f",a);
}
     else{

     printf(" %.2f",c);
}
   if (b>c){

       printf("%.2f",b);
   }

   else {

       printf("%.2f",c);
   }
    
  return 0;
}
