#include <stdio.h>

int main(){
    float litros, valor;
    char comb;

    printf("Digite quantos litros de combustivel ira colocar: ");
    scanf("%f", &litros);
    fflush(stdin);
    printf("Digite qual combustivel ira colocar [E-Etanol G-Gasolina]: ");
    scanf("%c", &comb);

    if (comb == 'E' || comb == 'e'){
        if (litros < 20){
            valor = litros *2.90;
            valor = valor - (3 * valor / 100);
        }else{
            valor = 2.90 * litros;
            valor = valor - (5 * valor / 100);
        }
    }else if (comb == 'G' || comb == 'g'){
        if (litros < 20){
            valor = 4.40 * litros;
            valor = valor - (4 * valor / 100);
        }else{
            valor = 4.40 * litros;
            valor = valor - (6 * valor / 100);
        }
    }
    
    printf("O valor a ser pago é de %f", valor);
}