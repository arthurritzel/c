#include <stdio.h>
#include <math.h>

int main(){
    float altura, peso, imc;
    printf("Digite sua altura e seu peso: ");
    scanf("%f%f", &altura, &peso);
    imc = peso / pow(altura, 2);
    printf("Seu IMC é de %.2f\n", imc);

}