#include <stdio.h>

int very(char frase[20], char letra){
    int cont = 0, i;
    for (i = 0; frase[i] != '\0'; i++){
        if (letra == frase[i]){
            cont++;
        }
    }
    return cont;
}

int main(){
    char frase[20], letra;
    int cont = 0;
    printf("Digite a frase: ");
    fgets(frase, 20, stdin);
    fflush(stdin);
    printf("Digite a letra que quer procurar: ");
    scanf("%c", &letra);
    cont = very(frase, letra);
    printf("A letra %c aparece %i vezes", letra, cont);
}