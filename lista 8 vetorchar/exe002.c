#include <stdio.h>

int main(){
    char pal[10], vog[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    int cont = 0;
    printf("Digite uma palavra: ");
    gets(pal);
    for (int i = 0; pal[i] != '\0'; i++){
        for (int j = 0; j < 10; j++){
            if (vog[j] == pal[i]){
                cont++;
            }
            
        }
        
    }
    printf("Na palavra digitada existem %i vogais", cont);
}