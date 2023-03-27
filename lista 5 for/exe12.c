#include <stdio.h>

int main(){
    int x, mult;
    printf("Digite o numero a ser apresentado seu fatorial: ");
    scanf("%i", &x);
    for (; x > 0; x--){
        mult = x * mult;
    }
    printf("%i\n", mult);
    
}