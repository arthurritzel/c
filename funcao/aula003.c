#include <stdio.h>

float calc(float x, float y){
    float soma;
    soma = x + y;
    return soma;
}

int main(){
    float x, y, soma;
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);
    soma = calc(x ,y);
    printf("A soma é %.2f", soma);
    return 0;
}