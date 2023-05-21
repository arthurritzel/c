#include <stdio.h>

int main(){
    struct dados{
        char matricula[11];
        char nome[21];
        char codigo[11];
        float n1, n2;
    }alunos[10];

    for (int i = 0; i < 10; i++){
        printf("Digite a matricula: ");
        gets(alunos[i].matricula);
        fflush(stdin);
        printf("Digite o nome: ");
        gets(alunos[i].nome);
        fflush(stdin);
        printf("Digite o codigo da materia: ");
        gets(alunos[i].codigo);
        fflush(stdin);
        printf("Digite a primeria nota: ");
        scanf("%f", &alunos[i].n1);
        fflush(stdin);
        printf("Digite a segunda nota: ");
        scanf("%f", &alunos[i].n2);
        fflush(stdin);
        printf("\n");
    }

    for (int i = 0; i < 10; i++){
        printf("Matricula: %s\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Codigo materia: %s\n", alunos[i].codigo);
        printf("Media de notas: %f\n\n", (alunos[i].n1 * 1 + alunos[i].n2 * 2) / 3);
    }
    
}