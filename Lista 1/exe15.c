#include <stdio.h>

int main(){
    float cfab, cfim;
    printf("Digite o valor do cusot de fabrica do carro: ");
    scanf("%f", &cfab);
    cfim = cfab + (cfab * 0.28) + (cfab * 0.45);
    printf("O valor do preco final do carro é %.2f", cfim);
}