#include <stdio.h>

int main(){
    int n = 0;
    float x, x2;
    while (n < 10){
        printf("Digite um valor: ");
        scanf("%f", &x);
        if(n == 1){
            x2 = x;
        }
        if(x > x2){
            x2 = x;
        }
        n++;
    }
    printf("O maior digitado é %.2f", x2);
    
}