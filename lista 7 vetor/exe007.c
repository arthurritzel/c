#include <stdio.h>

int main(){
    int n[10], x[2], y, y1;
    for (int i = 0; i < 10; i++){
        printf("->");
        scanf("%i", &n[i]);
    }

    for (int i = 0; i < 10; i++){
        if(i == 0){
            x[0] = n[i];
            x[1] = n[i];
        }
        if(n[i] > x[0]){
            x[0] = n[i];
            y = i;
        }
        if(n[i] < x[1]){
            x[1] = n[i];
            y1 = i;
        }
    }
    printf("Maior %i posicao %i \nMenor %i posicao %i", x[0], y, x[1], y1);
}