#include <stdio.h>

int main(){
    char frase[21], frase3[43];
    int j = 0;
    printf("Digite a frase: ");
    gets(frase);
    fflush(stdin);
    for (int i = 0; frase[i] != '\0'; i++){
        frase3[j] = frase[i];
        j++;
        frase3[j] = frase[i];
        j++;
    }
    printf("%s", frase3);
}