#include <stdio.h>

int main(){
    int mat[2][2], mat2[2][2], mat3[2][2];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("->");
            scanf("%i", &mat[i][j]);
        }
    }
    printf("------------------\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("->");
            scanf("%i", &mat2[i][j]);
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            mat3[i][j] = mat2[i][j] + mat[i][j];
        }
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%i", mat3[i][j]);
        }
        printf("\n");
    }
    
}