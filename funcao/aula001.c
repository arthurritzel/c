#include <stdio.h>

void soma(){
    float x, y, soma;
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);
    soma = x + y;
    printf("A soma é %.2f", soma);
}

int main(){
    soma();
    return 0;
}