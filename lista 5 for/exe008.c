#include <stdio.h>

int main(){
    int i, x, n = 0, n2 = 1, n3 = 0;
    printf("digite a quantidade de termos de fibonacci que deseja: ");
    scanf("%i", &x);
    for (i = 0; i < x; i++){
        printf("%i ", n);
        n3 = n + n2;
        n = n2;
        n2 = n3;
    }
    
}