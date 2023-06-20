#include <stdio.h>

int main(){
    int pinos, i=1, j = 0;

    printf("Quantos pinos deseja usar?");
    scanf("%i", &pinos);
    if (pinos >= 0 && pinos <= 28){
        for (i = 1; pinos >= i; i++){
            pinos = pinos - i;
            j++;
        }
        printf("Foram feitas %i fileiras\n", j);
        printf("Sobraram %i pinos", pinos);
    }else{
        printf("quantidade invalida!");
    }
    
}