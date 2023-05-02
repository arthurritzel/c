#include <stdio.h>

int main(){
    int n[5], cod, very;
    for (int i = 0; i < 5; i++){
        printf("->");
        scanf("%i", &n[i]);
    }

    

    do{
        printf("Digite o codigo[0, 1, 2]: ");
        scanf("%i", &cod);
        switch (cod){
        case 0:
            very = 1;
            break;
        case 1:
            very = 1;
            for (int i = 0; i < 5; i++){
                printf("%i\n", n[i]);
            }
            break;
        case 2:
            very = 1;    
            for (int i = 4; i >= 0; i--){
                printf("%i\n", n[i]);
            }
            break;
        default:
            printf("Codigo invalido!\n");
            very = 0;
            break;
        }
    }while (very == 0);    
}