#include <stdio.h>

int main(){
    int i;
    float x, x2;
    for (i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%f", &x);
        if(i == 0){
            x2 = x;
        }
        if (x > x2){
            x2 = x;
        }
        
    }
    printf("O maior valor foi %.2f", x2);
    
}