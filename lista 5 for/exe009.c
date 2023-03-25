#include <stdio.h>

int main(){
    int i;
    for(i = 0; i <= 999; i++){
        if(i % 11 == 5){
            printf("%i\n", i);
        }
    }
}