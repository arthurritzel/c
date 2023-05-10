#include <stdio.h>

int main(){
    float peso, altura, pesoideal;
    char sex;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    fflush(stdin);
    printf("Digite seu sexo[m/f]: ");
    scanf("%c", &sex);

    if (sex == 'm' || sex == 'M'){
        pesoideal = (72.7 * altura) - 58;
    }else if(sex == 'f' || sex == 'F'){
        pesoideal = (62.1 * altura) - 44.7;
    }

    printf("Seu peso e de %.2f, o peso ideal para voce e %.2f", peso, pesoideal);
    
}