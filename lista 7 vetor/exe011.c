#include <stdio.h>

int main(){
    int n[10], very, n2[10], j = 0;
    for (int i = 0; i < 10; i++){
        do{
            very = 0;
            printf("->");
            scanf("%i", &n[i]);

            
                if(n[i] > 50 || n[i] < 0){
                    very = 1;
                    printf("Digite no intervalo de 0 a 50\n");
                    break;
                }else{
                    very = 0;
                    if(n[i] % 2 == 1){
                        n2[j] = n[i];
                        j++;
                    }else{
                        n2[j] = 0;
                        j++;
                    }
                }
            
        }while (very != 0);
    }

    for (int i = 0; i < 10; i++){
        printf("%i\n", n2[i]);
    }
}