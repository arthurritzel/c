#include <stdio.h>

int main(){
    char frase[81];
    printf("Digite uma frase: ");
    fgets(frase, 81, stdin);
    for (int i = 0; frase[i] != '\0'; i++){
        if (frase[i] == 'z'){
            frase[i] = 'a';
        }else if (frase[i] == 'y'){
            frase[i] = 'e';
        }else if (frase[i] == 'w'){
            frase[i] = 'o';
        }else if (frase[i] == 'k' || frase[i] == 'K'){
            frase[i] = 't';
        }else if (frase[i] == 'b'){
            frase[i] = 'm';
        }else if (frase[i] == 'd'){
            frase[i] = 'n';
        }else if (frase[i] == 'f'){
            frase[i] = 'p';
        }
    }
    printf("%s", frase);
    
}