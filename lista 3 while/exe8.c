#include <stdio.h>

int main(){
    float nn = 0, np = 0, n;
    do{
        printf("Digite um valor, digite 0 para encerrar: ");
        scanf("%f", &n);
        if(n > 0){
            np = n + np;
        }
        if(n < 0){
            nn++;
        }

    }while (n != 0);
    printf("A soma dos positivos é %.2f\n", np);
    printf("A quantidade de negativos é %.2f", nn); 
}