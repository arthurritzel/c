#include <stdio.h>

int calc(int n1){
    if(n1 % 2 == 0){
        printf("O numero é par");
    }else{
        printf("O numero é impar");
    }
    return 0;
}

int main(){
    int n;
    printf("Digite um valor: ");
    scanf("%i", &n);
    calc(n);
}