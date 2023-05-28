#include <stdio.h>

int main(){
    struct dados{
        char nome[21], posicao[11];
        int idade, numero;
    }titu[6], reser[4], aux;
    int esc, very = 1, very1 = 0, very2 = 0, cont = 0;

    do{
    printf("Quais atletas deseja informar?\n[1]Titulares\n[2]Reservas\n->");
    scanf("%i", &esc);
    switch (esc){
    case 1:
        if(very1 != 1){
            for (int i = 0; i < 6; i++){
                fflush(stdin);
                printf("Digite o nome: ");
                gets(titu[i].nome);
                fflush(stdin);
                printf("Digite a posicao: ");
                gets(titu[i].posicao);
                fflush(stdin);
                printf("Digite a idade: ");
                scanf("%i", &titu[i].idade);
                fflush(stdin);
                printf("Digite o numero: ");
                scanf("%i", &titu[i].numero);
                fflush(stdin);
                printf("-----------------------------\n");
            }
            very1 = 1;
            cont++;
        }else{
            printf("\nVoce ja informou esses dados!\n");
        }
            very = 1;
        break;
    case 2:
        if(very2 != 1){
            for (int i = 0; i < 4; i++){
                fflush(stdin);
                printf("Digite o nome: ");
                gets(reser[i].nome);
                fflush(stdin);
                printf("Digite a posicao: ");
                gets(reser[i].posicao);
                fflush(stdin);
                printf("Digite a idade: ");
                scanf("%i", &reser[i].idade);
                fflush(stdin);
                printf("Digite o numero: ");
                scanf("%i", &reser[i].numero);
                fflush(stdin);
                printf("-----------------------------\n");
            }
            very2 = 1;
            cont++;
        }else{
            printf("\nVoce ja infromou esses dados\n");
        }
        
        very = 1;
        break; 
    default:
        printf("\nValor invalido!\n");
        very = 0;   
        break;
    }
    } while ((cont != 2) || (very != 1));

    for(int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            if (titu[i].numero < titu[j].numero){
                aux = titu[j];
                titu[j] = titu[i];
                titu[i] = aux;
            }
        }
    }
    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (reser[i].numero < reser[j].numero){
                aux = reser[j];
                reser[j] = reser[i];
                reser[i] = aux;
            }
        }
    }
    printf("TITULARES\n");
    for (int i = 0; i < 6; i++){
        printf("Nome: %s\n", titu[i].nome);
        printf("Posicao: %s\n", titu[i].posicao);
        printf("Idade: %i\n", titu[i].idade);
        printf("Numero: %i\n", titu[i].numero);
        printf("-------------------\n");
    }
    printf("RESERVAS");
    for (int i = 0; i < 4; i++){
        printf("Nome: %s\n", reser[i].nome);
        printf("Posicao: %s\n", reser[i].posicao);
        printf("Idade: %i\n", reser[i].idade);
        printf("Numero: %i\n", reser[i].numero);
        printf("-------------------\n");
    }
}