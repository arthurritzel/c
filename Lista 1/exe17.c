#include <stdio.h>
#include <math.h>

int main(){
    float aresta, area;
    printf("Digite o valor da aresta: ");
    scanf("%f", &aresta);
    area = sqrt(3) * pow(aresta, 2);
    printf("O valor da area é de %.2f\n", area);
}