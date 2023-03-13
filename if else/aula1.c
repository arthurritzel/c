#include <stdio.h>
#include <math.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%i", &num);
    if(num > 10){
        printf("O numero é maior que 10");
    }else if(num < 10) {
        printf("O numero é menor que 10");
    }else if (num == 10)
    {
        printf("O numero é igual a 10");
    }
    

}