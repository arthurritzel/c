#include <stdio.h>

char dupli(char frase2[21]){
    char frase3[42];
    int j = 0;
    for (int i = 0; frase2[i] != '\0'; i++){
        frase3[j] = frase2[i];
        j++;
        frase3[j] = frase2[i];
        j++;
    }
    printf("%s", frase3);
    return 0;
}

int main(){
    char frase[21];
    printf("Digite a frase: ");
    fgets(frase, 21, stdin);
    dupli(frase);
}