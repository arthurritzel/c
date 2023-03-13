#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);
    d = (pow((a + b), 2) + pow((b + c), 2))/2;
    printf("O valor de D é %.2f \n", d);
}