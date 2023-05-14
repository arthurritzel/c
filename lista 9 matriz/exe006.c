#include <stdio.h>

int main(){
    int mat[3][3], soma[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++){
       for (int j = 0; j < 3; j++){
        printf("->");
            scanf("%i", &mat[i][j]);
            soma[i] += mat[i][j];
       }
    }

    for (int i = 0; i < 3; i++){
       for (int j = 0; j < 3; j++){
            printf("  %i  ", mat[i][j]);
       }
       printf("\n");
    }

    for (int i = 0; i < 3; i++){
        printf("A soma da linha %i e %i\n", i, soma[i]);
    }
    
}