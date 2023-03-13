#include<stdio.h>

int main(){
    float valor, soma = 0;
    printf("Digite quantos valores a serem somados\n");
    printf("Digite 0 para sair\n");
    valor = 1;
    while (valor != 0){
        printf("Digite o valor: ");
        scanf("%f", &valor);
        soma = soma + valor;
    }
    printf("A soma é %.2f", soma);
}