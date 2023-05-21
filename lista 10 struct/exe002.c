#include <stdio.h>

int main(){
    struct dados{
        char nome[21];
        int idade;
        char sexo;
        char cpf[15];
        char datanasc[15];
        char setor[5];
        char cargo[30];
        float salario;
    }funci;
    printf("Digite seu nome: ");
    gets(funci.nome);
    fflush(stdin);
    printf("Digite sua idade: ");
    scanf("%i", &funci.idade);
    fflush(stdin);
    printf("Digite o sexo [m/f]: ");
    scanf("%c", &funci.sexo);
    fflush(stdin);
    printf("Digite seu cpf: ");
    gets(funci.cpf);
    fflush(stdin);
    printf("Digite sua data de nascimento: ");
    gets(funci.datanasc);
    fflush(stdin);
    printf("Digite seu setor: ");
    gets(funci.setor);
    fflush(stdin);
    printf("Digite seu cargo: ");
    gets(funci.cargo);
    fflush(stdin);
    printf("Digite seu salario: ");
    scanf("%f", &funci.salario);

    printf("Seu nome: %s\n", funci.nome);
    printf("Sua idade: %i\n", funci.idade);
    printf("O sexo [m/f]: %c\n", funci.sexo);
    printf("Seu cpf: %s\n", funci.cpf);
    printf("Sua data de nascimento: %s\n", funci.datanasc);
    printf("Seu setor: %s\n", funci.setor);
    printf("Seu cargo: %s\n", funci.cargo);
    printf("Digite seu salario: %f\n", funci.salario);
}