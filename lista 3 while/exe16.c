#include <stdio.h>

int main(){
    int x = 1, n, verify = 0;
    printf("Digite um numero inteiro para verificar se ele e primo ou nao: ");
    scanf("%i", &n);
    while (x <= n){
        if(n % x == 0){
            verify++;
        }
        x++;
    }
    if(verify == 2){
        printf("O numero é primo\n");
    }else{
        printf("O numero nao é primo\n");
    }
    
}