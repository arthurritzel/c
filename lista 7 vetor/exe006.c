#include <stdio.h>

int main(){
    int n[8], x, y;
    for (int i = 0; i < 8; i++){
        printf("->\n");
        scanf("%i", &n[i]);
    }
    printf("Digite o valor de X: ");
    scanf("%i", &x);
    printf("Digite o valor de Y: ");
    scanf("%i", &y);
    
    printf("A soma dos valores das posicoes %i e %i é %i", x, y, n[x] + n[y]);
}