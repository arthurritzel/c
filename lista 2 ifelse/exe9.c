#include <stdio.h>

int main(){
    float n1, n2, m;
    printf("Digite a primeria nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    m = (n1 + n2) / 2;
    if (m <= 5){
        printf("Sua média é de %.1f \nMedia de 5.0 ou inferior - REPROVADO", m);
    }else if (m > 5 && m < 7)
    {
        printf("Sua média é %.1f \nMédia entre 5.1 e 6.9 - EXAME", m);
    }else if (m >= 7 && m <= 10)
    {
        printf("Sua media é %.1f \nMedia entre 7 e 10 - APROVADO", m);
    }else{
        printf("Digite suas notas corretamente!");
    }
}