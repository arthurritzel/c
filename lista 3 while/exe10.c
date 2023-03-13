#include <stdio.h>

int main(){
    int n, m, x = 0, x1 = 0;
    printf("Digite a altura: ");
    scanf("%i", &n);
    printf("Digite a largura: ");
    scanf("%i", &m);
    while (x1 < n){
        while (x < m){
            printf("*");
            x++;
        }
        printf("\n");
        x = 0;
        x1++;
    }
    
}