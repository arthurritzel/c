#include <stdio.h>

int main(){
    char nome[20], end[50];
    printf("Nome: ");
    gets(nome);
    fflush(stdin);
    printf("Endereco: ");
    gets(end);
    printf("Nome: %s\nEndereco: %s", nome, end);
}