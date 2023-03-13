#include<stdio.h>

int main(){
    float valor, soma = 0;
    printf("Digite quantos valores a serem somados\n");
    printf("Digite 0 para sair\n");
    do{
        printf("Digite o valor: ");
        scanf("%f", &valor);
        soma = soma + valor;
    }while (valor != 0);
    printf("A soma é %.2f", soma);
}