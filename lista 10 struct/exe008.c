#include <stdio.h>

int main(){
    struct end{
        char logradouro[21], bairro[21];
        int num;
        long int cep;
    };
    struct dados{
        int matricula;
        char nome[21];
        struct end endereco;
    }clientes[3];
    
    for (int i = 0; i < 3; i++){
        printf("Digite a matricula do cleinte: ");
        scanf("%i", &clientes[i].matricula);
        fflush(stdin);
        printf("Digite o nome do cliente: ");
        gets(clientes[i].nome);
        fflush(stdin);
        printf("Digite o logadouro do endereco: ");
        gets(clientes[i].endereco.logradouro);
        fflush(stdin);
        printf("Digite o bairro do endereco: ");
        gets(clientes[i].endereco.bairro);
        fflush(stdin);
        printf("Digite o numero do endereco: ");
        scanf("%i", &clientes[i].endereco.num);
        fflush(stdin);
        printf("Digite o cep do endereco: ");
        scanf("%li", &clientes[i].endereco.cep);
        printf("-----------------");
        fflush(stdin);    
    }
    
    for (int i = 0; i < 3; i++){
        printf("matricula: %i\n", clientes[i].matricula);
        printf("cliente: %s\n", clientes[i].nome);
        printf("logadouro: %s\n", clientes[i].endereco.logradouro);
        printf("bairro: %s\n", clientes[i].endereco.bairro);
        printf("numero: %i\n", clientes[i].endereco.num);
        printf("cep: %li\n", clientes[i].endereco.cep);
        printf("------------------------");

    
    }
}