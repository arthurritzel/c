#include <stdio.h>

int main(){
    int n[10], m[10], p;
    for (int i = 0; i < 10; i++){
        printf("->");
        scanf("%i", &n[i]);
    }
    printf("------------\n");
    for (int i = 0; i < 10; i++){
        printf("->");
        scanf("%i", &m[i]);
    }
    for (int i = 0; i < 10; i++){
        p += (n[i] * m[i]);
    }
    printf("%i", p);
}