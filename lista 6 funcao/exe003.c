#include <stdio.h>
#include <math.h>

int calc(int a, int b, int c){
    int delta;
    delta = pow(b, 2) - 4 * a * c;
    return delta;
}

int main(){
    int a, b, c, delta;
    printf("Vamos calcular uma equacao de segundo grau!\n");
    printf("Digite o valor de A: ");
    scanf("%i", &a);
    printf("Digite o valor de B: ");
    scanf("%i", &b);
    printf("Digite o valor de C: ");
    scanf("%i", &c);
    delta = calc(a, b, c);
    printf("O valor de delta é %i", delta);
}