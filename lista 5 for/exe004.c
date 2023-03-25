#include <stdio.h>

int main(){
    int i, x;
    printf("Digite o comeco: ");
    scanf("%i", &i);
    printf("Digite o final: ");
    scanf("%i", &x);
    for (; i <= x; i++){
        printf("%i\n", i);
    }
    
}