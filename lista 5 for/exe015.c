#include <stdio.h>

int main(){
    int i;
    float soma = 0, n = 1, n2 = 1;
    for (i = 1; i <= 99; i = i + 2){
        soma = soma + n/n2;
        printf("%f\n", soma);
        n2++;
        n = n + 2;
    }
    
}