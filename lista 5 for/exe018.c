#include <stdio.h>

int main(){
    int i;
    for(i = 11; i < 100; i++){
        if(i%10 != 0 && i % (i/10) == 0){
            printf("%i\n", i);
        }
    }
}