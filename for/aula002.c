#include <stdio.h>

int main(){
    int i, x, soma = 0, y;
    float media;
    printf("Digite quantos numeros deseja digitar: ");
    scanf("%i", &y);
    for (i = 0; i < y; i++){
        printf("Digite o valor:");
        scanf("%i", &x);
        soma = soma + x;
    }
    printf("A media é %.2f\n", media = soma/y);
}