#include <stdio.h>

int main(){
    int n[5], soma = 0;
    for (int i = 0; i < 5; i++){
        scanf("%i", &n[i]);
        soma = soma + n[i];
    }
    printf("A soma é %i", soma);
    
}