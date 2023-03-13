#include <stdio.h>

int main(){
    float salar;
    printf("Digite seu salario R$");
    scanf("%f", &salar);
    if(salar <= 600){
        printf("Voce esta insento do INSS");
    }else if (salar > 600 && salar <= 1200){
        printf("Com um salario de R$%.2f sera descontado R$%.2f de INSS\nResultando em um salario de %.2f", salar, salar * 0.2, salar * 0.8);
    }else if (salar > 1200 && salar <= 2000){
        printf("Com um salario de R$%.2f sera descontado R$%.2f de INSS\nResultando em um salario de %.2f", salar, salar * 0.25, salar * 0.75);
    }else if (salar > 2000){
        printf("Com um salario de R$%.2f sera descontado R$%.2f de INSS\nResultando em um salario de %.2f", salar, salar * 0.3, salar * 0.7);
    }
}