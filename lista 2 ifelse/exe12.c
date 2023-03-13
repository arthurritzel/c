#include <stdio.h>
#include <math.h>

int main(){
    float l1 ,l2 ,hip;
    printf("Digite o valor dos catetos do triangulo\n");
    scanf("%f%f", &l1, &l2);
    hip = sqrt(pow(l1, 2) + pow(l2, 2));
    if(hip > 100){
        printf("Hipotenusa de %.2f excede o tamanho permitido", hip);
    }else{
        printf("Hipotenusa aceita %.2f", hip);
    }
}