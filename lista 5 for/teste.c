#include <stdio.h>

int main()
{
    int segundos, horas, minutos, resto;
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);
    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;
    printf("O tempo convertido é: %d horas, %d minutos e %d segundos.\n", horas, minutos, segundos);
    return 0;
}
