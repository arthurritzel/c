#include <stdio.h>

int main(){
    int A[10], B[10], C[10];
    for (int i = 0; i < 10; i++){
        printf("->");
        scanf("%i", &A[i]);
    }
    printf("----------------------\n");
    for (int i = 0; i < 10; i++){
        printf("->");
        scanf("%i", &B[i]);
    }

    for (int i = 0; i < 10; i++){
        if(A[i] > B[i]){
            C[i] = 1;
        }else if (A[i] == B[i]){
            C[i] = 0;
        }else if (A[i] < B[i]){
            C[i] = -1;
        }
        printf("%i\n", C[i]);
        
    }
}