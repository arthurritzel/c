#include <stdio.h>

int main(){
    int x, mult = 1;
    printf("Digite o numero a ser apresentado seu fatorial: ");
    scanf("%i", &x);
    for (int i = x; i > 0; i--){
        mult = i * mult;
    }
    printf("%i\n", mult);
    
}