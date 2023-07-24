#include <stdio.h>

int main(){
    struct dados{
        char nome[20];
        float alt, pesoide;
        int sexo;
    }pessoa[3];

    for (int i = 0; i < 3; i++){
        fflush(stdin);
        printf("Qual seu nome: ");
        gets(pessoa[i].nome);
        fflush(stdin);
        printf("Qual sua altura: ");
        scanf("%f", &pessoa[i].alt);
        printf("qual seu genero\n[1]feminino\n[2]masculino\n->");
        scanf("%i", &pessoa[i].sexo);
        switch (pessoa[i].sexo){
        case 1:
            pessoa[i].pesoide = (62.1 * pessoa[i].alt) - 44.7;
            break;
        case 2:
            pessoa[i].pesoide = (72.7 * pessoa[i].alt) - 58;
            break;
        }
        printf("---------------\n");
    }
    for (int i = 0; i < 3; i++){
        printf("pessoa %i\n", i+1);
        printf("Nome: %s\n", pessoa[i].nome);
        printf("Altura: %f\n", pessoa[i].alt);
        printf("Peso ideal: %f\n", pessoa[i].pesoide);
        printf("----------------\n");
    }
    
    
}