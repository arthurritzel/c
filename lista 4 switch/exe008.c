#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int x = 1, esc, esc2, x2 = 1, x3 = 0, x4 =0;
    float saldo, mov;
    char nome[21], conta[11];
    do{
        srand(time(NULL));
        saldo = rand() % 1000000;
        printf("Digite seu nome: ");
        scanf("%s", nome);
        fflush(stdin);
        printf("Digite sua conta bancaria (00-000): ");
        scanf("%s", conta);
        fflush(stdin);
        printf("Ola %s na conta %s voce possui um saldo de R$%.2f\n", nome, conta, saldo);
        do{
            do{
                printf("Selecione o tipo de movimentacao bancaria\n[1]Deposito\n[2]Saque\n->");
                scanf("%i", &esc);
                fflush(stdin);
                switch (esc){
                case 1:
                    printf("Digite o valor a ser depositado: ");
                    scanf("%f", &mov);
                    saldo = saldo + mov;
                    x4 = 0;
                    break;
                case 2:
                    printf("Digite o valor a ser sacado: ");
                    scanf("%f", &mov);
                    if(mov > saldo){
                        printf("\n\nSua opcao de saque e maior que seu saldo, o valor foi descontado do cheque especial!\n\n");
                    }
                    saldo = saldo - mov;
                    x4 = 0;
                    break;
                default:
                    printf("Opcao invalida!\n");
                    x4 = 1;
                    break;
                }
            }while(x4 != 0);
            printf("Movimentacao de fundos realizada seu saldo atual e de R$%.2f\n", saldo);
            do{
                printf("Oque deseja fazer a seguir?\n[1]Realizar outro saque ou deposito\n[2]acessar outra conta\n[3]fechar o programa\n->");
                scanf("%i", &esc2);
                switch (esc2){
                case 1:
                    x2 = 1;
                    esc = 0;
                    x3 = 0;
                    fflush(stdin);
                    break;
                case 2:
                    x2 = 0;
                    x = 1;
                    x3 = 0;
                    fflush(stdin);
                    break;
                case 3:
                    x2 = 0;
                    x = 0;
                    x3 = 0;
                    fflush(stdin);
                    break;
                default:
                    printf("Opcao invalida!\n");
                    x3 = 1;
                    break;
                }
            }while(x3 != 0);
        }while(x2 != 0);
    } while (x != 0);
    
}
