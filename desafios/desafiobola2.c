#include<stdio.h>
//Faça um programa que leia um inteiro n e imprima um
//triângulo retângulo formado por asteriscos. Ex: n = 6
int main(){
    int n, asterisco, cont = 0, x3 = 0, n2;
    printf("Informe valor para n\n");
    scanf("%i",&n);
    n2 = n;
    while(x3 < n){
    while(n>=1){
        asterisco=1;
        while (asterisco<=n){//escreve cada asterisco
            cont++;
            asterisco=asterisco+1;//x++
        }
        
        n = n-1;
    }
    n = n2 - 1;
    x3++;
    }
    printf("%i", cont);
}