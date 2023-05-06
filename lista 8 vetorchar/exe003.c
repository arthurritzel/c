#include <stdio.h>

int main(){
    char num[12];
    printf("Digite seu numero ddd+numero(Sem espacos)");
    gets(num);
    if (num[0] == '4' && num[1] == '5'){
        printf("Cascavel");
    }else if (num[0] == '4' && num[1] == '1'){
        printf("Curitiba");
    }else if (num[0] == '2' && num[1] == '1'){
        printf("Rio de janeiro");
    }else if (num[0] == '5' && num[1] == '1'){
        printf("Porto Alegre");
    }else if (num[0] == '6' && num[1] == '7'){
        printf("Mato Grosso do Sul");
    }else if (num[0] == '6' && num[1] == '3'){
        printf("Tocantins");
    }else{
        printf("Nao identifiquei sua regiao");
    }
    
}