#include <stdio.h>

int main(){
    float baseme, basemai, alt, result;
    printf("Digite o valor da base menor, maior e altura, em cm,  nessa ordem\n");
    scanf("%f%f%f", &baseme, &basemai, &alt);
    result = (basemai + baseme)/2 * alt;
    printf("O valor da area do trapezio é de %.2fCm cubicos", result);
}