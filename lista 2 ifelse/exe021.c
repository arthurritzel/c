#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta;
    printf("Digite o valor de a da equacao: ");
    scanf("%f", &a);
    printf("Digite o valor de b da equacao: ");
    scanf("%f", &b);
    printf("Digite o valor de c da equacao: ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4*a*c;

    if (delta < 0){
        printf("O valor de delta é %.2f\nNao e possivel realizar a equacao", delta);
    }else if (a == 0){
        printf("Essa nao e uma equacao de segundo grau");
    }else if (delta == 0 || delta > 0){
        printf("O valor de delta é %f", delta);
    }
    
    
    
}