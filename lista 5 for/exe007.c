#include <stdio.h>
#include <math.h>

int main(){
    int n, d, di, x;
    for(n = 1000; n < 9999; n++){
        d = n / 100;
        di = n % 100;
        x = pow((d + di), 2);
        if(x == n){
            printf("%i\n", n);
        }
    }
}