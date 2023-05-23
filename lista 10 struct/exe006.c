#include <stdio.h>

int main(){
    struct dados{
        char marca[16];
        int ano;
        float preco;
    }carro[5];
    float p;
    int flag = 0;
    for (int i = 0; i < 5; i++){
        printf("Digite a marca do carro: ");
        gets(carro[i].marca);
        fflush(stdin);
        printf("Digite o ano do carro: ");
        scanf("%i", &carro[i].ano);
        printf("Digite o preco do carro: ");
        scanf("%f", &carro[i].preco);
        fflush(stdin);
        printf("------------------------------\n");
    }
    do{
        printf("Digite o valor maximo que deseja pagar\nSe quiser encerrar a simulacao digite 0\n-> ");
        scanf("%f", &p);  
        fflush(stdin);
        flag = 0;
        if (p != 0){
            for (int i = 0; i < 5; i++){
                if (carro[i].preco < p){
                    printf("Marca: %s\n", carro[i].marca);
                    printf("Ano: %i\n", carro[i].ano);
                    printf("Preco: %.2f\n", carro[i].preco);
                    flag = 1;
                }
            }
            if(flag != 1){
                printf("Nada encontrado\n");
            }
        }
    }while(p != 0);
}