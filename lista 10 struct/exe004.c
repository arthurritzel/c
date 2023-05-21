#include <stdio.h>

int main(){
    struct dados{
        char nome[21];
        char matricula[15];
        float n1, n2, n3, media;
    }alunos[5];
    float maiorm, menorm, maiornot;
    int alunomai, alunomen, alunosmn, i;
    for (i = 0; i < 5; i++){
        printf("Digite a matricula: ");
        gets(alunos[i].matricula);
        fflush(stdin);
        printf("Digite o nome: ");
        gets(alunos[i].nome);
        fflush(stdin);
        printf("Digite a primeria nota: ");
        scanf("%f", &alunos[i].n1);
        fflush(stdin);
        printf("Digite a segunda nota: ");
        scanf("%f", &alunos[i].n2);
        fflush(stdin);
        printf("Digite a terceira nota: ");
        scanf("%f", &alunos[i].n3);
        fflush(stdin);
        alunos[i].media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3;
        if (i == 0){
            maiorm = alunos[i].media;
            menorm = alunos[i].media;
            maiornot = alunos[i].n1;
            alunomen = i;
            alunomai = i;
        }
        if (alunos[i].media > maiorm){
            alunomai = i;
            maiorm = alunos[i].media;
        }
        if (alunos[i].media < menorm){
            alunomen = i;
            menorm = alunos[i].media;
        }
        if (alunos[i].n1 > maiornot){
            maiornot = alunos[i].n1;
            alunosmn = i;
        }
        printf("\n");
    }

    for (int j = 0; j < 5; j++){
        printf("Nome: %s\n", alunos[j].nome);
        printf("Matricula: %s\n", alunos[j].matricula);
        printf("Nota 1: %f\n", alunos[i].n1);
        printf("Nota 2: %f\n", alunos[i].n2);
        printf("Nota 3: %f\n", alunos[i].n3);
        printf("Media: %f\n\n", alunos[i].media);
    }

    printf("Aluno com maior media: %s\nMedia: %f\n\n", alunos[alunomai].nome, alunos[alunomai].media);
    printf("Aluno com menor media: %s\nMedia: %f\n\n", alunos[alunomen].nome, alunos[alunomen].media);
    printf("Aluno com maior nota na primeria prova: %s\nNota: %f", alunos[alunosmn].nome, alunos[alunosmn].n1);
    

    
    
}