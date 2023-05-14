#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int mat[5][5], soma = 0;
    srand(time(NULL));
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            mat[i][j] = rand() % 50;
            if (i == j){
                soma += mat[i][j]; 
            }
            
        }
    }

    for (int i = 0; i < 5; i++){
       for (int j = 0; j < 5; j++){
            printf("  %i  ", mat[i][j]);
       }
       printf("\n\n");
    }
    printf("A soma é %i", soma);
}