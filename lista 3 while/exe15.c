#include <stdio.h>

int main(){
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
    float saque, x;
    printf("Digite o valor do saque: ");
    scanf("%f", &saque);
    while (saque > 0){
        if(saque >= 100){
            saque = saque - 100;
            n100++;
        }else if (saque >= 50){
            saque = saque - 50;
            n50++;
        }else if (saque >= 20){
            saque = saque - 20;
            n20++;
        }else if (saque >= 10){
            saque = saque - 10;
            n10++;
        }else if (saque >= 5){
            saque = saque - 5;
            n5++;
        }else if (saque >= 2){
            saque = saque - 2;
            n2++;
        }else if (saque >= 1){
            saque = saque - 1;
            n1++;
        }else{
            x = saque;
            saque = 0;
        }
    }
    printf("Sera necessario\n%i notas de 100\n%i notas de 50\n%i notas de 20\n%i notas de 10\n%i notas de 5\n%i notas de 2\n%i notas de 1.\nE faltara %.2f centavos para ser entregue", n100, n50, n20, n10, n5, n2, n1, x);
    
}