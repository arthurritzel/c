#include <stdio.h>
#include <stdlib.h>

int main(){
    float x, y, soma, sub, div, mult;
    printf("Digite o preimrio valor:");
    scanf("%f", &x);
    printf("Digite outro valor: ");
    scanf("%f", &y);
    soma = x + y;
    sub = x - y;
    div = x / y;
    mult = x * y;
    printf("O resultado da soma é %.2f\nA subtracao é %.2f\nA divisao é %2.f\nE a multiplicacao é %2.f ", soma, sub, div, mult);
}