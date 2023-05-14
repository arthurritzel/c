#include <stdio.h>

int main(){
    int mat[3][2];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("->");
            scanf("%i", &mat[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("%i", mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            mat[i][j] = mat[i][j] * 11;
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("%i", mat[i][j]);
        }
        printf("\n");
    }

}