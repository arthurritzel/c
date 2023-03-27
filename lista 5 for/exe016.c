#include <stdio.h>

int main(){
    float m, mi;
    int t = 0, h = 0, min = 0;
    printf("Digite a massa do material: ");
    scanf("%f", &m);
    for(mi = m; mi > 0.5; mi = mi/2){
        t = t + 50;
    }
    if (t > 3600){
        h = (t / 60) / 60;
    }else if(t > 60){
        min = t / 60;
    }
    printf("%i %i %i", h, min, t);
    
}