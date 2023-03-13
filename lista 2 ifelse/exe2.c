//Faça um programa que receba a idade de uma pessoa identifique se ela pode retirar o título de eleitor votar neste ano. Sabendo que:
//a. 16 e 17 anos tem o voto facultativo;
//b. 18 a 70 anos voto obrigatório;
//c. Acima de 70 anos tem voto facultativo.

#include <stdio.h>

int main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    if(idade < 16){
        printf("Voce nao esta apto para fazer o titulo!");
    }else if(idade >= 16 && idade < 18)
    {
        printf("A realizaçao do titulo é facultativa!");
    }
    else if(idade >=18 && idade <=70)
    {
        printf("Seu voto é obrigatorio!");
    }
    else
        printf("Seu voto é facultativo!");
    
}