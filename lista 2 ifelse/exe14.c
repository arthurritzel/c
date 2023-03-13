#include <stdio.h>

int main(){
    float salar, aumento, perce;
    printf("Digite seu salario: ");
    scanf("%f", &salar);
    if(salar <= 280){
        aumento = salar * 0.2;
        perce = 20;
    }else if (salar > 280 && salar <= 700){
        aumento = salar * 0.15;
        perce = 15;
    }else if (salar > 700 && salar <= 1500){
        aumento = salar * 0.10;
        perce = 10;
    }else if (salar > 1500){
        aumento = salar * 0.05;
        perce = 5;
    }
    printf("Seu salario antes do reajuste era de R$%.2f\n", salar);
    printf("Com esse valor sera concedido um aumento de %.0f porcento\n", perce);
    printf("Resultando um salario de %.2f\n", salar + aumento);
    
}