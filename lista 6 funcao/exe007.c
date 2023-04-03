#include <stdio.h>

float f1(float compra){
    char esc;
    float valor;
    int parc, x, x1;
    do{
        printf("Escolha a forma de pagamento\n[A] A vista com 10 porcento de desconto\n[B] Em 2x sem juros\n[C] De 3 a 10 vezes com jutos de 3 porcento ao mes\n->");
        scanf("%s", &esc);
        switch (esc){
        case 'A':
        case 'a':
            valor = compra - compra * 0.10;
            printf("Com pagamento a vista o valor fica R$%.2f\n", valor);
            x = 0;
            break;
        case 'B':
        case 'b':
            printf("Parcelado em duas vezes o valor fica 2 vezes de %.2f\n", compra/2);
            x = 0;
            break;
        case 'C':
        case 'c':
            do{
                printf("Em quantas vezes deseja parcelar:");
                scanf("%i", &parc);
                if(parc > 10){
                    printf("\nTrabalhamos com parcelas de no maximo 10 vezes!\n\n");
                    x1 = 1;
                }else{
                    x1 = 0;
                }
            }while(x1 != 0);
            valor = (compra / parc) + (compra / parc) * 0.03;
            printf("Parcelando em %i vezes ficara R$%.2f ao mes com um total de %.2f\n", parc, valor, valor * parc);
            x = 0;
            break;
        default:
            printf("Opcao invalida!\n");
            x = 1;
            break;
        }
    }while(x != 0);
    return 0;
}
float f2(float compra){
    char esc;
    float valor;
    int x;
    do{
        printf("Escolha a forma de pagamento\n[A] A vista com 10 porcento de desconto\n[B] Em 2x sem juros\n->");
        scanf("%s", &esc);
        switch (esc){
        case 'A':
        case 'a':
            valor = compra - compra * 0.10;
            printf("Com pagamento a vista o valor fica R$%.2f\n", valor);
            x = 0;
            break;
        case 'B':
        case 'b':
            printf("Parcelado em duas vezes o valor fica 2 vezes de %.2f\n", compra/2);
            x = 0;
            break;
        default:
            printf("Opcao invalida\n");
            x = 1;
            break;
        }
    }while(x != 0);
    return 0;
}
int main(){
    float compra, valor;
    printf("Digite o valor da sua compra: ");
    scanf("%f", &compra);
    if(compra > 200){
        f1(compra);
    }else{
        f2(compra);
    }
    printf("Obrigado pela compra!!\n");
}