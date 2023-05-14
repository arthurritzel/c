#include <stdio.h>

int main(){
    int mat[4][4], soma;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("->");
            scanf("%i", &mat[i][j]);
            soma += mat[i][j];
        }
    }
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%i", mat[i][j]);
        }
        printf("\n");
    }
    printf("A soma é %i", soma);
}