#include <stdio.h>

struct data{
    int dia, mes, ano;
};

int main(){
    struct dados{
        int matricula;
        char nome[20];
        char curso[15];
        struct data nasc;
    }alunos[5];
    // struct dados aluno[5];
    
    for (int i = 0; i < 5; i++){
        printf("Digite seu nome: ");
        gets(alunos[i].nome);
        fflush(stdin);
        printf("Digite a matricula: ");
        scanf("%i", &alunos[i].matricula);
        fflush(stdin);
        printf("Digite o curso: ");
        gets(alunos[i].curso);
        fflush(stdin);

        printf("Digite o dia/mes/ano de nascimento\n");
        scanf("%i%i%i", &alunos[i].nasc.dia, &alunos[i].nasc.mes, &alunos[i].nasc.ano);
        fflush(stdin);
    }

    for (int i = 0; i < 5; i++){
        printf("Nome: %s, Matricula %i, Curso: %s\n%i/%i/%i\n", alunos[i].nome, alunos[i].matricula, alunos[i].curso, alunos[i].nasc.dia, alunos[i].nasc.mes, alunos[i].nasc.ano);
    }

}