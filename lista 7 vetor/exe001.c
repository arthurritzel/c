#include <stdio.h>

int main(){
    int n[6] = {1, 0, 5, -2, -5, 7}, soma = 0;
    
    soma = n[0] + n[2] + n[5];
    printf("A soma é %i\n", soma);
    n[4] = 100;
    for (int i = 0; i < 7; i++){
        printf("%i\n", n[i]);
    }
    
}