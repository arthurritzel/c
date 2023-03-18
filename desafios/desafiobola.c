#include <stdio.h>

int main(){
    int n, n2, x = 0, x1 = 0, x3 = 0, cont = 0;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);
    n2 = n;
    while(x3 <= n){
        while(x < n){
            while (x1 < n2){  
                x1++;
                cont++;
            }
            x1 = 0;
            n2 = n2 - 1;
            x++;
        }
        x3++;
        n = n - 1;
        n2 = n2 - 1;
        x = 0;
        x1 = 0;
        printf("t ");
    }
    printf("%i", cont);
}