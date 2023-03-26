#include <stdio.h>

int main(){
    int n, n2, soma = 0;
    printf("Digite o primeiro valor: ");
    scanf("%i", &n);
    printf("Digite o segundo valor: ");
    scanf("%i", &n2);
    printf("| A | B | Parcelas |\n");
    printf("---------------------\n");
    while(n >= 1){
        if (n % 2 == 1){
            printf(" %i  %i  %i \n", n, n2, n2);
            soma = soma + n2;
        }else{
            printf(" %i  %i  - \n", n, n2);
        }
        n2 = n2*2;
        n = n/2;
    }
    printf("%i\n", soma);
}