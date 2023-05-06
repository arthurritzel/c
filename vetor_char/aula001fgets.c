#include <stdio.h>
//fgets nao é necessario ser usado
int main(){
    char nome[20];
    printf("Nome: ");
    fgets(nome, 20, stdin);
    printf("%s", nome);
}