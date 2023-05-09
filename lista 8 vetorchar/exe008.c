#include <stdio.h>

char ultimo_nome(char nome1[31]){
    int i, cont = -2;
    for (i = 0; nome1[i] != '\0'; i++){
        cont++;
    }
    for (i = cont; i > 0; i--){
        if (nome1[i] == ' '){
            cont = i + 1;
            break;
        }
    }
    for (int i = cont; nome1[i] != '\0'; i++){
        printf("%c", nome1[i]);
    }
    
    return 0;
}

int main(){
    char nome[31];
    printf("Digite seu nome completo: ");
    fgets(nome, 31, stdin);
    ultimo_nome(nome);
}