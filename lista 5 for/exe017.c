#include <stdio.h>

int main(){
    int i, n, n2, n3;
    printf("Digite o primerio termo: ");
    scanf("%i", &n);
    printf("Digite o segundo termo: ");
    scanf("%i", &n2);
    for (i = 1; i < 11; i++){
        if(i % 2 == 0){
            n3 = n2 - n;
        }else{
            n3 = n2 + n;
        }
        printf("%i\n", n3);
        n = n2;
        n2 = n3;
        
        
    }
    
}