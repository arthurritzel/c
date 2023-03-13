#include <stdio.h>

int main(){
    float salario;
    int n;
    printf("CALCULO DE IMPOSTO DE RENDA\n");
    do{
        printf("Digite seu salario: ");
        scanf("%f", &salario);
        if(salario < 1637.11){
            printf("Insento de imposto de renda\n");
        }else if (salario >= 1637.11 && salario < 2453.5){
            printf("Voce pagara R$%.2f de imposto de renda\n", salario * 0.075);
        }else if (salario >= 2453.5 && salario < 3271.38){
            printf("Voce pagara R$%.2f de imposto de renda\n", salario * 0.15);
        }else if (salario >= 3271.38 && salario < 4087.65){
            printf("Voce pagara R$%.2f de imposto de renda\n", salario * 0.225);
        }else if (salario >= 4087.65){
            printf("Voce pagara R$%.2f de imposto de renda\n", salario * 0.275);
        }
        printf("Digite 1 para continuar ou 0 para sair: ");
        scanf("%i", &n);
    }while(n != 0);
    printf("PROGRAMA ENCERRADO\n");
}