//codigo feito no visual code
#include <stdio.h>

int main(){
    int g, c, e, y, x, z, n, d;
    printf("Digite o ano: ");
    scanf("%i", &y);

    //numero aureo
    g = (y % 19) + 1;

    //calculo seculo
    c = (y / 100) + 1;

    //x z correcoes
    x = (3*c/4) - 12;
    z = (8*c + 5) / 25 - 5;

    //calculo do e
    e = (11*g + 20 + z - x)%30;
    if(e == 25 && g > 11){
        e = e + 1;
    }else if (e == 24){
        e = e + 1;
    }
    
    //calculo lua cheia
    n = 44 - e;
    if(n < 21){
        n = n + 30;
    }

    //calculo domingo
    d = 5*y / 4 - (x + 10);
    n = (n + 7) - (d + n) % 7;
    
    //calculo mes
    if(n > 31){
        printf("Pascoa: %i de abril de %i\n", n-31, y);
    }else{
        printf("Pascoa: %i de março de %i\n", n, y);
    }
}