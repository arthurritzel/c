//Escreva um programa que identifique se um número é par ou impar. Se par apresentar a sua raiz quadrada, se impar apresentar sua metade.
#include <stdio.h>
#include <math.h>

int main(){
    int n1;
    
    printf("Digite um numero interio: ");
    scanf("%i", &n1);
    if(n1 % 2 == 0){
        printf("O numero %i é par e sua raiz é %.2f", n1, sqrt(n1));
    }else{

        printf("O numero %i é impar e sua metade é %.2f",n1, (n1/2)+0.5);
    }
}