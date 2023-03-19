#include <stdio.h>

int main(){
    float n1, n2;
    char ope;
    printf("CALCULADORA\n");
    printf("Digite o tipo de operaçao [+] [-] [/] [*]: ");
    scanf("%s", &ope);
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    switch (ope)
    {
    case'+':
        printf("O resultado é %.2f", n1 + n2);
        break;
    case'-':
        printf("O resultado é %.2f", n1 - n2);
        break;
    case'/':
        printf("O valor é %.2f", n1 / n2);
        break;
    case'*':
        printf("O resultado é %.2f", n1 * n2);
        break;
    default:
        printf("Operador invalido");
        break;
    }
}
