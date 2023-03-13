#include <stdio.h>

int main(){
    float salariob, parcela;
    printf("Digite seu salario bruto: ");
    scanf("%f", &salariob);
    printf("Digite o valor da prestaçao: ");
    scanf("%f", &parcela);
    if(parcela > salariob * 0.30){
        printf("Emprestimo negado!\n");
    }else{
        printf("Emprestimo aceito\n");
    }
}