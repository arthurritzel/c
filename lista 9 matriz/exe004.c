#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int mat[4][4], maior, cordi, cordj;
    srand(time(NULL));
     for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            mat[i][j] = rand() % 50;
            if (i == 0){
                maior = mat[i][j];
                cordi = i;
                cordj = j;
            }

            if (mat[i][j] > maior){
                maior = mat[i][j];
                cordi = i;
                cordj = j;
            }
            
            
        }
    }

    for (int i = 0; i < 4; i++){
       for (int j = 0; j < 4; j++){
            printf("  %i  ", mat[i][j]);
       }
       printf("\n");
    }
    
    printf("Omaior numero é %i e esta na linha %i coluna %i", maior, cordi, cordj);

     
}