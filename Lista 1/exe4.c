#include <stdio.h>

int main(){
    float raio, result;
    printf("Digite o valor do raio da circunferencia: ");
    scanf("%f", &raio);
    result = 3.14 * 2 * raio;
    printf("O valor do perimetro da circunferencia é %2.f\n", result);

}