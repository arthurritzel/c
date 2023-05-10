#include <stdio.h>

int main(){
    char nome[31], primeiron[11], ultimon[11];
    int esp = 0, j = 0;
    printf("Digite seu nome completo: ");
    gets(nome);
    //identificando primerio nome
    for (int i = 0; nome[i] != ' '; i++){
        primeiron[i] = nome[i];
    }
    
    //identificando ultimo nome
    for (int i = 0; nome[i] != '\0'; i++){
        if(nome[i] == ' '){
            esp = i;
        }
    }
    for (int i = esp + 1; nome[i] != '\0'; i++){
        ultimon[j] = nome[i];
        j++;
    }

    printf("%s, %s", ultimon, primeiron);
    
    
}