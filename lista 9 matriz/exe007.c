#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int mat[5][5], x, very = 0;
    srand(time(NULL));
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            mat[i][j] = rand() % 50;
        }
    }
    printf("Digite o numero que deseja procurar: ");
    scanf("%i", &x);

    for (int i = 0; i < 5; i++){
       for (int j = 0; j < 5; j++){
            printf("  %i  ", mat[i][j]);
       }
       printf("\n");
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (x == mat[i][j]){
                printf("Linha %i Coluna %i\n", i, j);
                very = 1;
            }
        }
    }

    if(very != 1){
        printf("Nao encontrado");
    }
}