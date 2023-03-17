#include <stdio.h>

int main(){
    int n;
    printf("escolha entre [1] chocolate [2] morango: ");
    scanf("%i", &n);
    switch (n)
    {
    case 1:
        printf("Chocolate");
        break;
    case 2:
        printf("morango");
        break;
    default:
        printf("Digita certo");
        break;
    }
}