#include <stdio.h>

int main(){
    float n[100];
    printf("Digite um valor: ");
    scanf("%f", &n[0]);
    for (int i = 1; i < 100; i++){
        n[i] = n[i - 1] / 2;
    }
    for (int i = 0; i < 100; i++){
        printf("%f\n", n[i]);
    }
}