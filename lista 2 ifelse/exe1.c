#include <stdio.h>
#include <math.h>

int main(){
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);
    if(num < 0){
        printf("O valor digitado elevado ao quadrado é %.2f", pow(num, 2));
    }else{
        printf("O triplo do valor digitado é %.2f", 3 * num);
    }
}