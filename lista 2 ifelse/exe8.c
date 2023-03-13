#include <stdio.h>

int main(){
    float compra;
    printf("Digite o valor da compra bruta: ");
    scanf("%f", &compra);
    if(compra < 20){
        printf("O valor de venda devera ser de R$%.2f", compra * 1.45);
    }else{
        printf("O valor de venda devera ser de R$%.2f", compra * 1.30);
    }
}