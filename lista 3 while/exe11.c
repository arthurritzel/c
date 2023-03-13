#include <stdio.h>

int main(){
    int n, n2, x = 0, x1 = 0;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);
    n2 = n;
    while(x < n){
        while (x1 < n2){
            printf("*");
            x1++;
        }
        printf("\n");
        x1 = 0;
        n2 = n2 - 1;
        x++;
    }
}