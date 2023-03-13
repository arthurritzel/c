#include <stdio.h>
#include <stdlib.h>

int main(){
    float num, ante, suce;
    printf("Digite um valor:");
    scanf("%f", &num);
    ante = num - 1;
    suce = num + 1;
    printf("O sucessor é %2.f e o antecessor é %2.f", suce, ante);

}