#include <stdio.h>

int main(){
    float cont = 0, n, s = 0;
    printf("Digite 10 numeros para soma-los\n");
    while (cont < 10){
        printf("Digite o numero: ");
        scanf("%f", &n);
        s = s + n;
        cont++;
    }
    printf("A soma é %.2f", s);
}