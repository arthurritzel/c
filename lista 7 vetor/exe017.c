#include <stdio.h>

int main(){
    int n[10], aux;
    for (int i = 0; i < 10; i++){
        printf("->");
        scanf("%i", &n[i]);

        for (int j = 0; j < i; j++){
            if(n[i] < n[j]){
                aux = n[j];
                n[j] = n[i];
                n[i] = aux;
            }
        }
        
    }
    for (int i = 0; i < 10; i++){
        printf("%i\n", n[i]);
    }
    
}