#include <stdio.h>

int main(){
    char frase[20], letra;
    int cont = 0;
    printf("Digite a frase: ");
    gets(frase);
    fflush(stdin);
    printf("Digite a letra que quer procurar: ");
    scanf("%c", &letra);
    for (int i = 0; frase[i] != '\0'; i++){
        if (letra == frase[i]){
            cont++;
        }
    }
    printf("A letra %c aparece %i vezes", letra, cont);
}