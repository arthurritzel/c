#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int pc, eu;
    srand(time(NULL));
    pc = (rand() % 3) + 1;
    printf("Escolha sua jogada!\n[1]Pedra\n[2]Papel\n[3]Tesoura\nDigite aqui: ");
    scanf("%i", &eu);
    if(eu > 3){
        printf("Escolha invalida reinicie o programa!\n");
    }else{
        if (eu == 1 && pc == 2){
            printf("O computador selecionou %i\n", pc);
            printf("Voce perdeu!\n");
        }else if (eu == 2 && pc == 3){
            printf("O computador selecionou %i\n", pc);
            printf("Voce perdeu!\n");
        }else if (eu == 3 && pc == 1){
            printf("O computador selecionou %i\n", pc);
            printf("Voce perdeu!\n");
        }else if(eu == pc){
            printf("O computador selecionou %i\n", pc);
            printf("Voce EMPATOU\n");
        }else{
            printf("O computador selecionou %i\n", pc);
            printf("Voce GANHOU!\n");
        }
    }
}