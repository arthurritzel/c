#include <stdio.h>

int main(){
    int b, n, f = 0;
    printf("Digite o valor de b: ");
    scanf("%i", &b);
    printf("Digite o valor de n: ");
    scanf("%i", &n);

    for (int i = 1; i < n; i++){
        f += b * b;
    }
    printf("%i", f);
}