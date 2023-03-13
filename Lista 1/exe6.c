#include <stdio.h>

int main (){
    float grau, conver;
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &grau);
    conver = (9 * grau + 160)/5;
    printf("A temperatura em fahrenheint é %.2f\n", conver);

}