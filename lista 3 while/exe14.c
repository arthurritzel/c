#include <stdio.h>

int main(){
    int n, x = 0, soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);
    while (x < n){
        if(n % x == 0){
            soma = soma + x;
        }
        x++;
    }
    printf("A soma dos numeros divisiveis por %i é %i\n", n, soma);
    
}