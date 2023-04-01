#include <stdio.h>

int soma(float x, float y){
    float soma;
    soma = x + y;
    printf("A soma é %.2f", soma);
    return 0;
}

int main(){
    float x, y;
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);
    soma(x ,y);
    return 0;
}