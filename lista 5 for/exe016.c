#include <stdio.h>

int main(){
    float m, mi;
    int t = 0, h = 0, min = 0, resto = 0;
    printf("Digite a massa do material em g: ");
    scanf("%f", &m);
    for(mi = m; mi > 0.5; mi = mi/2){
        t = t + 50;
    }
    h = t / 3600;
    resto = t % 3600;
    min = resto / 60;
    t = resto % 60;

    printf("Com uma massa incial de %.3fg levara %i horas %i minutos %i segundos resultando em uma massa de %.3fg", m,  h, min, t, mi);
    
}