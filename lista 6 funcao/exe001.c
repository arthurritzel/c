#include <stdio.h>

float calc(float n1){
    if(n1 > 0){
        printf("O numero é positivo");
    }else if(n1 == 0){
        printf("O numero é igual a zero");
    }else{
        printf("O numero é negativo");
    }
    return 0;
}

int main(){
    float n;
    printf("Digite um valor: ");
    scanf("%f", &n);
    calc(n);
}