#include <stdio.h>

int main(){
    float idade, peso;
    printf("Digite sua idade: ");
    scanf("%f", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    if(peso <= 50 && idade < 18){
        printf("Voce nao tem idade nem o peso suficiente para doar");
    }else if(peso <= 50 && idade > 67){
        printf("Voce nao tem o peso minimo para doar, e voce ultrapassou a idade maxima para doar");
    }else if(peso <= 50){
        printf("Voce nao tem peso suficiente para doar");
    }else if(idade < 18){
        printf("Voce nao tem idade suficiente para doar");
    }else if(idade > 67){
        printf("Voce ultrapassou a idade maxima para doar");
    }else{
        printf("com %.2fKg e %.2f anos é permitido doar sangue", peso, idade);
    }
}
