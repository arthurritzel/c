#include <stdio.h>

int main(){
    char n[15];
    int cont = -2, very = 0, j;
    printf("Digite uma palavra: ");
    fgets(n, 15, stdin);
    for (int i = 0; n[i] != '\0'; i++){
        cont++;
    }
    j = cont;
    for (int i = 0; i < j; i++){
        if (n[i] != n[cont]){
            very = 1;
        }
        cont--;
    }
    if (very == 1){
        printf("A palavra %s nao e um palindromo", n);
    }else{
        printf("A palavra e um palindromo");
    }
    
    
}