#include <stdio.h>

int main(){
    int n[10], n1[10], n2[10];
    for (int i = 0; i < 10; i++){
        printf("->");
        scanf("%i", &n[i]);
    }
    printf("----------------\n");
    for (int i = 0; i < 10; i++){
        printf("->");
        scanf("%i", &n1[i]);
    }
    for (int i = 0; i < 10; i++){
        if(i % 2 == 0){
            n2[i] = n[i];
        }else if(i % 2 == 1){
            n2[i] = n1[i];
        }
        printf("%i\n", n2[i]);
    }

}