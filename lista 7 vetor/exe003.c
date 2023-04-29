#include <stdio.h>

int main(){
    int n[8];
    for (int i = 0; i < 8; i++){
        printf("->");
        scanf("%i", &n[i]);
    }
    printf("---------------------------\n");
    for (int i = 7; i >= 0; i--){
        printf("%i\n", n[i]);
    }
    
    
}