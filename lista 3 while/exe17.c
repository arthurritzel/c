#include <stdio.h>

int main(){
    int hab, x = 0, codigo;
    float media = 0, precokwh, consumo, verifyconsu = 0, verifyconsum, soma = 0, codigo1s = 0, codigo2s = 0, codigo3s = 0;
    printf("digite o toal de habitantes da cidade: ");
    scanf("%i", &hab);
    printf("Digite o preço do kwh: ");
    scanf("%f", &precokwh);
    printf("\n");
    while (x < hab){
        printf("Digite seu consumo de kwh do mes: ");
        scanf("%f", &consumo);
        printf("Digite o codigo do consumidor\n[1]Residencial\n[2]Comercial\n[3]Industrial\n->");
        scanf("%i", &codigo);
        //calculo maior
        if(consumo > verifyconsu){
            verifyconsu = consumo;
        }

        //calculo menor
        if(x == 0){
            verifyconsum = consumo;
        }
        if(consumo < verifyconsum){
            verifyconsum = consumo;
        }

        //calculo media
        soma = soma + consumo;
        media++;

        //atribuindo ao codigo
        if(codigo == 1){
            codigo1s = codigo1s + consumo;
        }else if(codigo == 2){
            codigo2s = codigo2s + consumo;
        }else if (codigo == 3){
            codigo3s = codigo3s + consumo;
        }
        
        x++;

        
    }
    printf("\n");
    printf("Maior consumo %.2f\nMenor consumo %.2f\n", verifyconsu, verifyconsum);
    printf("Media geral %.2f\n", soma / media);
    printf("Total de consumo residencial %.2fkwh\nTotal de consumo comercial %.2fkwh\nTotal de consumo industrial %.2fkwh", codigo1s, codigo2s, codigo3s);
    
}