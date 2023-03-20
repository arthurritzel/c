#include <stdio.h>

int main(){
    int planet;
    float kg;
    printf("VAMOS CALCULAR SEU PESO EM OUTROS PLANETAS!\n");
    printf("Para comecar informe seu peso: ");
    scanf("%f", &kg);
    printf("Escolha um planeta\n[1]Mercurio\n[2]Venus\n[3]Marte\n[4]Jupiter\n[5]Saturno\n[6]Urano\n->");
    scanf("%i", &planet);
    switch(planet){
        case 1:
            printf("Seu peso em Mercurio é de %.2f", kg * 0.37);
        break;
        case 2:
            printf("Seu peso em Venus é de %.2f", kg * 0.88);
        break;
        case 3:
            printf("Seu peso em Marte é de %.2f", kg * 0.38);
        break;
        case 4:
            printf("Seu peso em Jupiter é de %.2f", kg * 2.64);
        break;
        case 5:
            printf("Seu peso em Saturno é de %.2f", kg * 1.15);
        break;
        case 6:
            printf("Seu peso em Urano é de %.2f", kg * 1.17);
        break;
    }
}   