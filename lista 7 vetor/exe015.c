#include <stdio.h>

int main(){
    int n1[10], n2[10], n3[10], very = 0, cont = 0;
    for (int i = 0; i < 10; i++){
        printf("->");
        scanf("%i", &n1[i]);
    }
    printf("------------\n");
    for (int i = 0; i < 10; i++){
        printf("->");
        scanf("%i", &n2[i]);
    }

    for (int i1 = 0; i1 < 10; i1++){
        very = 0;
        for (int i2 = 0; i2 < cont; i2++){
            if (n3[i2] == n1[i1]){
                very = 1;
                break;
            }
        }
         
        for (int j = 0; j < 10; j++)
        {
            if(n1[i1] == n2[j] && very != 1){
                n3[i1] = n1[i1];
                cont++;
                break;
            }else{
                n3[i1] = 0;
            } 
        }
    }
    for (int i = 0; i < 10; i++){
        printf("%i\n", n3[i]);
    }
    
    
}