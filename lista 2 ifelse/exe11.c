//Sabendo que somente os municípios que possuem mais de 20.000 eleitores aptos tem segundo turno nas eleições para prefeito caso o primeiro colocado não tenha mais que 50% dos votos, fazer um algoritmo que leia o nome do município, a quantidade de eleitores aptos, o numero de votos do candidato mais votado e informar se ele terá ou não segundo turno em sua eleição municipal.

#include <stdio.h>

int main(){
    char mun[61];
    float eleiap, eleicand;
    printf("Digite o nome do municipio: ");
    scanf("%s", mun);
    printf("Digite a quantidade total de votantes do municipio: ");
    scanf("%f", &eleiap);
    printf("Digite o total de votos do canditato mais votado: ");
    scanf("%f", &eleicand);
    if(eleiap > 20000 && eleicand > eleiap/2){
        printf("No municipio de %s ocorrera segundo turno!", mun);
    }else{
        printf("No municipio de %s nao ocorrera segundo turno", mun);
    }
    
}