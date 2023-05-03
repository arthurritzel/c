#include <stdio.h>

int main(){
    int n[20], aux, i2 = 19;
    for (int i = 0; i < 20; i++){
        printf("->");
        scanf("%i", &n[i]);
    }
    for (int i = 0; i < 10; i++){
        aux = n[i];
        n[i] = n[i2];
        n[i2] = aux;
        i2--;
    }
    printf("-----------\n");
    for (int i = 0; i < 20; i++){
        printf("%i\n", n[i]);
    }

}