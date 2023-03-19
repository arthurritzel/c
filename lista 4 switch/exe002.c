#include <stdio.h>

int main(){
    int l;
    printf("Digite a quantidade de lado: ");
    scanf("%i", &l);
    switch (l){
    case 3:
        printf("Triangulo");
        break;
    case 4:
        printf("Quadrado ou retangulo");
        break;
    case 5:
        printf("Pentagono");
        break;
    case 6:
        printf("Hexagono");
        break;
    default:
        printf("Digite apenas lados menores que 7");
        break;
    }
    
}
