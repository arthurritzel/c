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
    
}