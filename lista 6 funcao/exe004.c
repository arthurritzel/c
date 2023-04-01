#include <stdio.h>

float calc(float n, float n1){
    if(n > n1){
        return n;
    }else if (n1 > n){
        return n1;
    }else{
        return n;
    }
}

int main(){
    float n, n1, nr;
    printf("Digite um valor: ");
    scanf("%f", &n);
    printf("Digite outro valor: ");
    scanf("%f", &n1);
    nr = calc(n, n1);
    printf("O maior valor é %f", nr);
}