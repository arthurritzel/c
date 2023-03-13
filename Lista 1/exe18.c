#include <stdio.h>

int main(){
    float c, i, t, m;
    printf("Digite seu capital: ");
    scanf("%f", &c);
    printf("Digite a taxa de juros: ");
    scanf("%f", &i);
    printf("Digite a quantidade de parcelas: ");
    scanf("%f", &t);
    m = c * i * t;
    printf("O valor do montante é %.2f", m);
}