#include <stdio.h>

int main(){
    int ano, mes, dia, result;
    printf("Digite sua idade, anos, meses, dias:\n");
    scanf("%i%i%i", &ano, &mes, &dia);
    result = (ano * 365) + (mes * 30) + dia;
    printf("Sua idade expressa somente em dias é %i dias\n", result);

}