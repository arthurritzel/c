#include <stdio.h>

float calc(float n1, float n2, float n3, char s){
    float m;
    switch (s){
    case 'A':
    case 'a':
        m = (n1 + n2 + n3) / 3;
        break;
    case 'P':
    case 'p':
        m = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
        break;
    default:
        break;
    }
    return m;
}

int main(){
    float n1, n2, n3, m;
    char s;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a letra (A para aritmetica P para ponderada): ");
    scanf("%s", &s);
    m = calc(n1, n2, n3, s);
    printf("O valor da media é %f", m);
}