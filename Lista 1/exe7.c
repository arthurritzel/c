#include <stdio.h>

int main(){
    float cota, reais, dolar;
    printf("Digite quantos reais voce tem: ");
    scanf("%f", &reais);
    printf("Digite o valor da cotacao do dolar atual: ");
    scanf("%f", &cota);
    dolar = reais * cota;
    printf("Com %.2f reais voce consegue comprar %.2f dolares\n", reais, dolar);

}