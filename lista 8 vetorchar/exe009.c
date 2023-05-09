#include <stdio.h>

int main(){
    char frase[31];
    int cont = -1;
    printf("Digite uma frase: ");
    fgets(frase, 31, stdin);
    for (int i = 0; frase[i] != '\0'; i++){
        if (frase[i] != ' '){
            cont++;
        }
        
    }
    
    printf("A frase tem %i caracteres", cont);
}