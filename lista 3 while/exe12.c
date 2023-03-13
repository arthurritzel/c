#include <stdio.h>

int main(){
    int x = 0, n = 1;
    while (x < 5){
        if(n % 3 == 0){
            printf("%i\n", n);
            x++;
        }
        n++;
    }
    
}