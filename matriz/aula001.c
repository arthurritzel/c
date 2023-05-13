#include <stdio.h>

int main(){
    int mat[3][3];
    printf("Preencha a matriz");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("->");
            scanf("%i", &mat[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (j == i){
                printf("%i", mat[i][j]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    
}