#include <stdio.h>
#include <math.h>

float f(float x, float n){
    float r;
    r = pow(x, n);
    return r;
}

int main(){
    float x, n, r;
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de n: ");
    scanf("%f", &n);
    r = f(x, n);
    printf("O valor é %.2f", r);
}