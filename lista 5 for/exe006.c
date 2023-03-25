#include <stdio.h>

int main(){
    int i, x, p = 0, im = 1;
    printf("Digite um valor: ");
    scanf("%i", &x);
    for(i = 0; i < x; i++){
        printf("|%i | %i|\n", p, im);
        p += 2;
        im += 2;
    }
}