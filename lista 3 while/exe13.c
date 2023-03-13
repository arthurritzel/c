#include <stdio.h>

int main(){
    int x = 0, n, n2 = 1;
    printf("Digite um numeor n: ");
    scanf("%i", &n);
    while (x < n){
        printf("%i\n", n2);
        n2 = n2 + 2;
        x++;
    }
}