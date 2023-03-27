#include <stdio.h>

int main(){
    int n, mult, e;
    printf("Digite um numero: ");
    scanf("%i", &n);
    for (; n > 0; n--){
        mult = n * mult;
    }
    e = 1 + 1 / 1 + 1 / 2 + 1 / 6 + 1 / mult;
    printf("%i", e);
    
}