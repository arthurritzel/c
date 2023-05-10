#include <stdio.h>

int main(){
    float valor, conv;
    char moeda;
    printf("Dgite o valor a ser convertido: ");
    scanf("%f", &valor);
    fflush(stdin);
    printf("Digite para qual moeda deseja converter\nF – franco suíço\nL – libra esterlina\nD – dólar\nM – marco alemão\n->");
    scanf("%c", &moeda);

    if (moeda == 'F' || moeda == 'f'){
        conv = valor * 5.57;
    }else if (moeda == 'L' || moeda == 'L'){
        conv = valor * 6.25;
    }else if (moeda == 'D' || moeda == 'd'){
        conv = valor * 4.96;
    }else if (moeda == 'M' || moeda == 'm'){
        conv = valor * 2.82;
    }

    printf("O valor convertido e de %.2f", conv);
}