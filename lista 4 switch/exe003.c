#include <stdio.h>
#include <math.h>

int main(){
    char escolha;
    float raio, lado, base, altura;
    printf("C - Area de circulo\nR - Area de retangulo\nQ - Area de quadrado\n->");
    scanf("%s", &escolha);
    switch (escolha){
    case 'C':
    case 'c':
        printf("Digite o raio do circulo:");
        scanf("%f", &raio);
        printf("A area do circulo é igual a %.2f", 2 * 3.14 * pow(raio, 2));
        break;
    case 'R':
    case 'r':
        printf("Digite a base do retangulo: ");
        scanf("%f", &base);
        printf("Digite a altura do triangulo: ");
        scanf("%f", &altura);
        printf("O valor da area é de %.2f", base * altura);
        break;
    case 'Q':
    case 'q':
        printf("Digite o valor do lado do quadrado: ");
        scanf("%f", &lado);
        printf("O valor da area do quadrado é %.2f", pow(lado, 2));
        break;
    default:
        printf("Escolha invalida");
        break;
    }
}