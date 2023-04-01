#include <stdio.h>

float x, y, soma;

float calc(){
    soma = x + y;
    return 0;
}

int main(){
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);
    calc();
    printf("A soma é %.2f", soma);
    return 0;
}