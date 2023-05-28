#include <stdio.h>

int main(){
    struct banda{
        char nome[21], genero[21];
        int inte, rank;
    }b[5];
    struct banda aux;
    
    for (int i = 0; i < 5; i++){
        printf("Banda %i\n", i+1);
        printf("Digite o nome da banda: ");
        gets(b[i].nome);
        fflush(stdin);
        printf("Digite o genero da banda: ");
        gets(b[i].genero);
        fflush(stdin);
        printf("Digite a quantidade de integrantes: ");
        scanf("%i", &b[i].inte);
        fflush(stdin);
        printf("Digite a posicao no rank (1 a 5): ");
        scanf("%i", &b[i].rank);
        fflush(stdin);
    }
    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (b[i].rank < b[j].rank){
                aux = b[j];
                b[j] = b[i];
                b[i] = aux;
            }
        }
    }
    for (int i = 0; i < 5; i++){
        printf("Banda: %s\n", b[i].nome);
        printf("Genero: %s\n", b[i].genero);
        printf("Quantidade de integrantes: %i\n", b[i].inte);
        printf("Rank: %i\n\n", b[i].rank);
    }
    
}