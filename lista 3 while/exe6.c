#include <stdio.h>

int main(){
    int x = 0, mm = 0, mf = 0;
    float alt, altm, altf;
    char sexo;
    while (x < 10){
        fflush(stdin);
        printf("Digite o sexo da pessoa m/f: ");
        scanf("%s", &sexo);
        if(sexo == 'm' || sexo == 'M'){
            printf("Digite a altura: ");
            scanf("%f", &alt);
            altm = altm + alt;
            mm++;
        }
        if(sexo == 'f' || sexo == 'F'){
            printf("Digite a altura: ");
            scanf("%f", &alt);
            altf = altf + alt;
            mf++;
        }
        x++;
    }
    printf("Media de altura dos homens %.2f\n", altm / mm);
    printf("Media de altura das mulher %.2f", altf / mf);

}