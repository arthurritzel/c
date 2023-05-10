#include <stdio.h>

int main(){
    float salarioh, horas, horasex = 0, salariof;
    printf("Digite seu salario por hora: ");
    scanf("%f", &salarioh);
    printf("Digite suas horas trabalhadas: ");
    scanf("%f", &horas);
    if (horas > 40){
        horasex = horas - 40;
        horas = horas - horasex;
    }
    salariof = horas * salarioh + (horasex * (salarioh *150/100));
    printf("Seu salario é de R$%.2f", salariof);
}