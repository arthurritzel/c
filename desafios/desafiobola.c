#include <stdio.h>

int main(){
    int n, n2, x = 0, x1 = 0, cont = 0;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);
    n2 = n;
    while(0 != n){
        while(x < n){
            while (x1 < n2){  
                printf("*");
                x1++;
                cont++;
            }
            printf("\n");
            x1 = 0;
            n2 = n2 - 1;
            x++;
        }
        printf("\n");
        n = n - 1;
        n2 = n;
        x = 0;
        x1 = 0;
    }
    printf("O total de bolas de canhao é %i\n", cont);
}