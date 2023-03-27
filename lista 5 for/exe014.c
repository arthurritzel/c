#include <stdio.h>

int main(){
    int i, x, soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%i", &x);
    for (i = 0; i < x; i++){
        if (x % i == 0){
            soma = soma + i;
        }
    }
    if (soma == x){
        printf("O numero %i é perfeito", x);
    }else{
        printf("O numero %i nao e perfeito", x);
    }
    
    
}