#include <stdio.h>
#include <stdlib.h>

int main(){
    float dist, gasto, media;
    printf("digite a distancia percorrida: ");
    scanf("%f", &dist);
    printf("Digite o gasto de combustivel em L: ");
    scanf("%f", &gasto);
    media = dist / gasto;
    printf("O consumo medio de combustivel por km rodado é de %2.fKm/l\n", media);

}