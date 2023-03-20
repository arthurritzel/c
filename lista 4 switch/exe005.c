#include <stdio.h>

int main(){
    float consumo, km;
    char carro;
    printf("Quantos Km voce rodou: ");
    scanf("%f", &km);
    printf("Qual o tipo do seu carro?\n[A] 12 km/l\n[B] 9 Km/l\n[C] 8 Km/l\n->");
    scanf("%s", &carro);
    switch (carro){
    case 'A':
    case 'a':
        consumo = km / 12;
        break;
    case 'B':
    case 'b':
        consumo = km / 9;
        break;
    case 'C':
    case 'c':
        consumo = km / 8;
        break;
    default:
        printf("Escolha invalida");
        break;
    }
    printf("Nessa viajem foram consumidos %.2fL", consumo);
}