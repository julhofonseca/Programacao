int main(int argc, char *argv[]){
  float v,t, a,R, X;

printf("Digite a aceleracao:");
  scanf("%f", &a);
 
  printf("Digite a velocidade inicial:");
  scanf("%f", &v);
  
  printf(" Digite o tempo do percurso:");
  scanf("%f", &t);

  R = v + (a*t);

  X = (3.6 * R); 
 
if (X<=40){

    printf("Veiculo Muito Lento");
}
    else if (X<=60){

      printf(" Velocidade Permitida");
    }
     
    else  if (X<=80){

       printf("Velocidade de Cruzeiro");
     }

     else if (X<=120){


       printf("Veiculo Rapido");

     }
         else if( X>120){

            printf("Veiculo Muito Rapido");
   }
     
    
  return 0;
}
