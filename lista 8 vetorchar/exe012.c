#include <stdio.h>
#include <string.h>

int main(){
    char usu[11], senha[11], csenha[11];
    printf("Digite uma usuario: ");
    fgets(usu, 11, stdin);
    printf("Digite uma senha: ");
    fgets(senha, 11, stdin);
    printf("Confirme a senha: ");
    fgets(csenha, 11, stdin);

    if (strcmp(senha, csenha)){
        printf("A senha nao bate");
    }else{
        printf("Senha validada");
    }
    
}