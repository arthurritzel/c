#include <stdio.h>

int main(){
    int n[10], very;
    for (int i = 0; i < 10; i++){
        do{
            very = 0;
            printf("->");
            scanf("%i", &n[i]);

            for (int j = 0; j < i; j++){
                if(n[i] == n[j]){
                    very = 1;
                    printf("Valor ja digitado\n");
                    break;
                }else{
                    very = 0;
                }
            }
        }while (very != 0);
    }

    for (int i = 0; i < 10; i++){
        printf("%i\n", n[i]);
    }
    
    
}