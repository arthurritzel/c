#include <stdio.h>

int main(){
    char nome[61], sexo;
    int idade;
    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("Digite seu sexo(f/m): ");
    scanf("%s", &sexo);
    if(sexo == 'f' && idade < 25){
        printf("Parabens %s voce foi aceita", nome);
    }else{
        printf("Infelizmente voce foi recusado(a) %s", nome);
    }
}