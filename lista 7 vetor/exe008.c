#include <stdio.h>

int main(){
    int n[10];
    for (int i = 0; i < 10; i++){
        printf("->");
        scanf("%i", &n[i]);
    }
    
    for (int i = 0; i < 10; i++){
        for (int i2 = i + 1; i2 < 10; i2++) {
            if(n[i] == n[i2]){
                printf("numero %i posicao %i e %i\n", n[i], i, i2);
                break;
            }
        }
    }
}