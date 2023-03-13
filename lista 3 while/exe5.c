#include <stdio.h>

int main(){
    int n, x = 0, n2;
    n = 0;
    n2 = 1;
    printf("Digite o valor para mostrar sua tabuada: ");
    scanf("%i", &n);
    while (x < 10){
        printf("%iX%i = %i\n", n, n2, n * n2);
        n2++;
        x++;
    }
     
}