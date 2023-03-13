#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x1, y1, x2, y2, d;
    printf("Digite as coordenadas x1 e y1: ");
    scanf("%f%f", &x1, &y1);
    printf("Digite as coordenadas x2 e y2: ");
    scanf("%f%f", &x2, &y2);
    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("A distancia entre elas é de %2.f\n", d);
    
}