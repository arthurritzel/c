#include <stdio.h>

int main(){
    float base, altura, area;
    printf("Digite a medida da base e a altura do triangulo nessa ordem\n");
    scanf("%f%f", &base, &altura);
    area = base * altura / 2;
    printf("O valor da area do triangulo é de %.2f", area);
}