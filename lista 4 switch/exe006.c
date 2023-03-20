#include <stdio.h>

int main(){
    int local, esc;
    printf("Defina seu local de viagem\n[1]Norte\n[2]Nordeste\n[3]Centro-Oeste\n[4]Sul\n->");
    scanf("%i", &local);
    printf("Voce ira comprar\n[1]Ida\n[2]Ida-Volta\n->");
    scanf("%i", &esc);
    switch(esc){
        case 1:
            switch(local){
                case 1:
                    printf("Uma passagem so de ida para o Norte custa R$500");
                    break;
                case 2:
                    printf("Uma passagem so de ida para o Nordeste custa R$350");
                    break;
                case 3:
                    printf("Uma passagem so de ida para o Centro-Oeste custa R$350");
                    break;
                case 4:
                    printf("Uma passagem so de ida para o Sul custa R$300");
                    break;
            }
            break;
        case 2:
            switch(local){
                case 1:
                    printf("Uma passagem de ida e volta para o Norte custa R$900");
                    break;
                case 2:
                    printf("Uma passagem de ida e volta para o Nordeste custa R$650");
                    break;
                case 3:
                    printf("Uma passagem de ida e volta para o Centro-Oeste custa R$600");
                    break;
                case 4:
                    printf("Uma passagem de ida e volta para o Sul custa R$550");
                    break;
            }
            break;
    }
}
