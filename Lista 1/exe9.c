#include <stdio.h>

int main(){
    float total, brancos, nulos, validos;
    printf("Digite a quantidade de votos validos, brancos e nulos\n");
    scanf("%f%f%f", &validos, &brancos, &nulos);
    total = validos + brancos + nulos;
    printf("A porcentagem de votos validos é %.2f\n", (validos * 100 / total));
    printf("A porcentagem de votos brancos é %.2f\n", (brancos * 100 / total));
    printf("A porcentagem de votos nulos é %.2f\n", (nulos * 100 / total));
}