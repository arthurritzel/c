#include <stdio.h>
//for é usado para contagem
int main(){
    int n, soma = 0, x;
    for(n = 0; n < 5; n++){
        printf("Digite um numero: ");
        scanf("%i", &x);
        soma = soma + x;
    }
    printf("%i", soma);
}