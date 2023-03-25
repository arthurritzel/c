#include <stdio.h>

int main(){
    int i, x;
    printf("Digite um numero: ");
    scanf("%i", &x);
    for (i = 1; i < x; i += 2){
        printf("%i\n", i);
    }
    
}