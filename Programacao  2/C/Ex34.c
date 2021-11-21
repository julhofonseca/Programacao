#include <stdio.h>

#define TAM 10

int main (int argc, char *argv[]){
  

    int vet[TAM], i , maior;

    //preenche o vetor

    for (i = 0; i < TAM; i++ ){
            scanf( "%i", &vet[i]);
    }
    //encontra o maior valor
        maior = vet[0];
         for (i = 1; i < TAM; i++ ){
             if (vet[i] > maior) {
                    maior = vet[i];
                }
                    }
    //mostra o vetor

                        printf("Vetor: ");
                             for (i = 0; i < TAM; i++ ){
                                 printf("%i", vet[i]);
                             }

                                printf("\nMaior Valor: %i",maior);

  return 0;
}
