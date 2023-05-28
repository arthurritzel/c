#include <stdio.h>
#include <string.h>

int main(){
    struct dados{
        char nome[31], autor[16];
        int ano;
    }livro[5];
    char busca[31];
    int very = 0;
    for (int i = 0; i < 5; i++){
        printf("Digite o nome do livro: ");
        gets(livro[i].nome);
        fflush(stdin);
        printf("Digite o nome do autor: ");
        gets(livro[i].autor);
        fflush(stdin);
        printf("Digite o ano do livro: ");
        scanf("%i", &livro[i].ano);
        fflush(stdin);
        printf("--------------------\n");
    }
    do{
        very = 0;
        printf("Digite qual livro deseja buscar: ");
        gets(busca);
        fflush(stdin);

        for (int i = 0; i < 5; i++){
            if (!strcmp(livro[i].nome, busca)){
                printf("Nome: %s\n", livro[i].nome);
                printf("Autor: %s\n", livro[i].autor);
                printf("Ano: %s\n", livro[i].autor);
                printf("--------------------\n");
            }
        }

        printf("Deseja fazer outra busca?\n[0]Sim\n[1]Não\n->");
        scanf("%i", &very);
        fflush(stdin);

    }while(very != 1);
    
}