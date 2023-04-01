#include <stdio.h>

float calc(float m){
    float dc, cm, mm;
    dc = m / 10;
    cm = m / 100;
    mm = m / 1000;
    printf("O valor de %.2f metros convertido para decimetros fica %.2f, em centimetro fica %.2f e em milimetros fica %.2f", m, dc, cm, mm);
    return 0;
}

int main(){
    float m;
    printf("Digite um valor: ");
    scanf("%f", &m);
    calc(m);
}