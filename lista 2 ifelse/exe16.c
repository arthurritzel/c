#include <stdio.h>

int main(){
    int dia, mes, ano;
    printf("Digite o dia mes e ano do que voce nasceu, nessa ordem\n");
    scanf("%i%i%i", &dia, &mes, &ano);
    if(dia > 31){
        printf("Dia invalido");
    }else if (mes > 12){
        printf("Mes invalido");
    }else if (ano > 2018){
        printf("Ano invalido");
    }else{
        printf("Data valida");
    }
    
    
}