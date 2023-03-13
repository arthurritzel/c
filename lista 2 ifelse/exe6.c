#include <stdio.h>

int main(){
    int apple;
    float preco;
    printf("Quantas maças voce ira comprar: ");
    scanf("%i", &apple);
    if(apple < 12){
        preco = apple * 1.3;
        printf("Como voce comprou menos de uma duzia o valor de cada maça é de R$1,30\nTotalizando R$%.2f", preco);
    } else{
        printf("Como voce comprou uma duzia ou mais o valor de cada maça é de R$1,00\nTotalizando R$%i", apple);
    }
}