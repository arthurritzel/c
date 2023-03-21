#include <stdio.h>

int main(){
    char idade;
    int valor;
    printf("Vamos calcular o valor do seu plano de saude!");
    printf("Selecione sua idade\n[A]Menos de 10 anos\n[B]Entre 10 e 30 anos\n[C]Entre 40 e 60 anos\n[D]Mais de 60 anos\n->");
    scanf("%s", &idade);
    switch (idade)
    {
    case 'A':
    case 'a':
        valor = 180;
        printf("Voce pagara R$%i no seu plano", valor);
        break;
    case 'B':
    case 'b':
        valor = 150;
        printf("Voce pagara R$%i no seu plano", valor);
        break;

    case 'C':
    case 'c':
        valor = 195;
        printf("Voce pagara R$%i no seu plano", valor);
        break;

    case 'D':
    case 'd':
        valor = 230;
        printf("Voce pagara R$%i no seu plano", valor);
        break;
     
    default:
        printf("Opção invalida");
        break;
    }
}