#include <stdio.h>

int main(){
    struct horario{
        int horas, min, seg;
    };
    struct dia{
        int dia, mes, ano;
    };
    struct comp{
        struct dia data;
        struct horario hora;
        char text[51];
    }compromis;
    
    printf("Digite o dia do compromisso dia/mes/ano\n");
    scanf("%i%i%i", &compromis.data.dia, &compromis.data.mes, &compromis.data.ano);
    fflush(stdin);
    printf("Digite a horario hora/minuto/segundo\n");
    scanf("%i%i%i", &compromis.hora.horas, &compromis.hora.min, &compromis.hora.seg);
    fflush(stdin);
    printf("Digite o que é o compromisso: ");
    gets(compromis.text);
    fflush(stdin);
    printf("%i/%i/%i\n", compromis.data.dia, compromis.data.mes, compromis.data.ano);
    printf("%i:%i:%i\n", compromis.hora.horas, compromis.hora.min, compromis.hora.seg);
    printf("Compromisso: %s", compromis.text);
}