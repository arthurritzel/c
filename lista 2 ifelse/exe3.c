#include <stdio.h>

int main(){
    float n1, n2, n3;
    printf("Digite o primerio valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &n3);

    if(n1 > n2 && n2 > n3){
        printf("A ordem é %f %f %f", n3, n2, n1);
    }else if (n2 > n1 && n1 > n3){
        printf("A ordem é %f %f %f", n3, n1, n2);
    }else if (n3 > n2 && n2 > n1){
        printf("A ordem é %f %f %f", n1, n2, n3);
    }else if (n1 > n3 && n3 > n2){
        printf("A ordem é %f %f %f", n2, n3, n1);
    }else if (n2 > n3 && n3 > n1){
        printf("A ordem é %f %f %f", n1, n3, n2);
    }else if (n3 > n1 && n1 > n2){
        printf("A ordem é  %f%f%f", n1, n2, n3);
    }else if (n1 == n2 && n3 < n2){
        printf("A ordem é %f %f %f", n3, n2, n1);
    }else if (n2 == n3 && n1 < n3){
        printf("A ordem é %f %f %f", n1, n3, n2);
    }else if(n1 == n3 && n2 < n1){
       printf("A ordem é %f %f %f", n2, n1, n3);
    }else if (n1 == n2 && n2 < n3){
        printf("A ordem é %f %f %f", n1, n2, n3);
    }else if (n2 == n3 && n3 < n1){
        printf("A ordem é %f %f %f", n2, n3, n1);
    }else if(n1 == n3 && n1 < n2){
       printf("A ordem é %f %f %f", n1, n3, n2); 
    }
}