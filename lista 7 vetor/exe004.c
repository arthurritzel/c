#include <stdio.h>

int main(){
    int n[5], n1[5], s[5];
    for (int i = 0; i < 5; i++){
        printf("->");
        scanf("%i", &n[i]);
    }
    printf("----------------------\n");
    for (int i = 0; i < 5; i++){
        printf("->");
        scanf("%i", &n1[i]);
    }

    for (int i = 0; i < 5; i++){
        s[i] = n[i] + n1[i];
        printf("%i\n", s[i]);
    }
}