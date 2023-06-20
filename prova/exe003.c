#include <stdio.h>

int main(){
    float valor[20], maior= 0;
    int i;

    for (i = 0; i < 20; i++){
        printf("Digite o valor: ");
        scanf("%f", &valor[i]);
        if (i == 0){
            maior = valor[i];
        }
        if (valor[i] > maior){
            maior = valor[i];
        }
    }
    printf("O maior valor foi %f", maior);
}