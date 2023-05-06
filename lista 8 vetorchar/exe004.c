#include <stdio.h>

int main(){
    char end[51];
    printf("Digite seu endereco (todo em minusculo): ");
    fgets(end, 51, stdin);
    if (end[0] == 'r' && end[1] == 'u' && end[2] == 'a'){
        printf("Voce mora em uma rua");
    }else if (end[0] == 'b' && end[1] == 'r'){
        printf("Voce mora em uma br");
    }else if (end[0] == 'a' && end[1] == 'v' && end[2] == 'e' && end[3] == 'n' && end[4] == 'i' && end[5] == 'd' && end[6] == 'a'){
        printf("Voce mora em uma avenida");
    }else if (end[0] == 't' && end[1] == 'r' && end[2] == 'a' && end[3] == 'v' && end[4] == 'e' && end[5] == 's' && end[6] == 's' && end[7] == 'a'){
        printf("Voce mora em uma travessa");
    }else{
        printf("nao identifiquei se voce mora em uma rua, avenida, travessa ou BR.");
    }
    
}