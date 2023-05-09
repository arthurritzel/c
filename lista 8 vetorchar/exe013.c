#include <stdio.h>
#include <string.h>

int main(){
    char s1[42], s2[21];
    printf("Digite uma palavra: ");
    scanf("%s", s1);
    fflush(stdin);
    printf("Digite uma frase: ");
    scanf("%s ", s2);
    fflush(stdin);
    if (strcmp(s1, s2)){
        strcat(s1, s2);
        printf("%s", s1);
    }else{
        printf("Palavras iguais");
    }
    
}