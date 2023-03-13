#include <stdio.h>

int main(){
    float n1, n2, n3, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    media = (n1*2 + n2*3 + n3*5)/10;
    printf("A sua media considerando os pesos das notas é %.2f", media);

}