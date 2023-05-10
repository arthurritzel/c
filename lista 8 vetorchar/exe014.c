#include <stdio.h>
#include <string.h>

int main(){
    char senha[17], num[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}, alfabeto[]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's','t', 'u', 'v', 'w', 'x', 'y', 'z'};
    int cara, very = 0, very2 = 0, very3 = 1, rep = 0;
    do{
        printf("\nDigite a senha: ");
        gets(senha);
        fflush(stdin);
        cara = strlen(senha);
        //verificando quantidade de digitos
        if (cara < 8){
            very = 1;
        }
        
        //verificando presença de numeros
        for (int i = 0; num[i] != '\0' ; i++){
            for (int j = 0; senha[j] != '\0'; j++){
                if(num[i] == senha[j]){
                    very2 = 0;
                    break;
                }else{
                    very2 = 1;
                }
            }
            if(very2 == 0){
                break;
            }
        }

        //verificando presença de letras
        for (int i = 0; i < 52 ; i++){
            for (int j = 0; senha[j] != '\0'; j++){
                if(alfabeto[i] == senha[j]){
                    very3 = 0;
                    break;
                }else{
                    very3 = 1;
                }
            }
            if(very3 == 0){
                break;
            }
        }
        
        if (very == 0 && very2 == 0 && very3 == 0){
            printf("Senha valida");
            rep = 0;
        }else if(very == 1 && very2 == 0 && very3 == 0){
            printf("A senha deve ter mais de 8 caracteres");
            rep = 1;
        }else if(very == 0 && very2 == 1 && very3 == 0){
            printf("A senha deve ter numeros");
            rep = 1;
        }else if(very == 0 && very2 == 0 && very3 == 1){
            printf("A senha deve ter letras");
            rep = 1;
        }
    }while(rep != 0);
    
    
}