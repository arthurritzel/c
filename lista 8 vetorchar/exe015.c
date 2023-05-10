#include <stdio.h>
#include <string.h>

int main(){
    char nomep[11], nomem[11], nomef[11], sobren[21];
    printf("Digite o primeiro nome da mae:");
    gets(nomem);
    fflush(stdin);
    strcat(nomem, " ");
    printf("Digite o primeiro nome do pai:");
    gets(nomep);
    fflush(stdin);
    strcat(nomep, " ");
    printf("Digite o primeiro nome do filho:");
    gets(nomef);
    fflush(stdin);
    strcat(nomef, " ");
    printf("Digite o sobrenome da familia:");
    gets(sobren);
    
    strcat(nomem, sobren);
    strcat(nomep, sobren);
    strcat(nomef, sobren);
    printf("Mae: %s\nPai: %s\nFilho: %s", nomem, nomep, nomef);
}