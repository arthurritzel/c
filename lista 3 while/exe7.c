#include <stdio.h>

int main(){
    int n = 1, soma = 0;
    while (n <= 500){
        if(n % 2 ==1 && n % 3 == 0){
            soma = soma + n;
        }
    n = n + 1;
    }
    printf("A soma dos numeros impares multiplos de 3 de 1 a 500 é %i", soma);
    
}
