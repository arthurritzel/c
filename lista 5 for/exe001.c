#include <stdio.h>

int main(){
    int i, n;
    printf("Digite um numero para ser exibida sua tabuada: ");
    scanf("%i", &n);
    for(i = 1; i <=10; i++){
        printf("%i X %i = %i\n", i, n, i * n);
    }
}