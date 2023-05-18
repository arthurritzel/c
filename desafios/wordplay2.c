#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char mat1[5][11] = {"while", "switch", "vetor", "for", "printf"},
    mat[5][30] = {"|   |   |   |   |   | * | * |", "|   |   |   |   |   |   | * |", "|   |   |   |   |   | * | * |", "|   |   |   | * | * | * | * |", "|   |   |   |   |   |   | * |"}, chute[11];
    int esc, very = 0, very2 = 0, contw = 0, conts = 0, contv = 0, contf = 0, contp = 0, certas = 0;

    
    do{    
        very = 0;
        for (int i = 0; i < 5; i++){
            printf("%i- %s\n\n", i + 1, mat[i]);
        }
        printf("1 - Estrutura de repeticao em C\n");
        printf("2 - Estrutura condicional em C que aceita como parametro apenas um numero inteiro ou um caractere\n");
        printf("3 - Tipo de variavel que permite alocar mais de um valor dentro dela\n");
        printf("4 - Estrutua de repeticao conhecida como contadora\n");
        printf("5 - Nome do comando em C que permite escrever coisas na tela\n");

         printf("Qual deseja responder: ");
        scanf("%i", &esc);
        fflush(stdin);
            do{
                switch (esc){
                case 1:
                    if(contw != 2){
                        printf("Qual seu chute: ");
                        gets(chute);
                        fflush(stdin);
                            if (!strcmp(mat1[0], chute)){
                                printf("Parabens, voce acertou\n");
                                mat[0][2] = 'w';
                                mat[0][6] = 'h';
                                mat[0][10] = 'i';
                                mat[0][14] = 'l';
                                mat[0][18] = 'e';
                                certas++;
                                very = 1;
                                very2++;
                                contw = 2;
                            }else{
                                    printf("Voce errou!\n");
                                    very = 0;
                                    contw++;
                                }
                            if (contw >= 2 && very != 1){//verifica se a quantidade de tentativas noi foi batida
                                printf("Suas chances acabaram para essa pergunta\n");  
                                very = 1;
                                very2++;
                            }
                    }else{
                        printf("\nVoce ja tentou essa pergunta!\n");
                        very = 1;
                    }
                    
                    break;
                case 2:
                    if(conts != 2){
                        printf("Qual seu chute: ");
                        gets(chute);
                        fflush(stdin);
                        if (!strcmp(mat1[1], chute)){
                            printf("Parabens, voce acertou\n");
                            mat[1][2] = 's';
                            mat[1][6] = 'w';
                            mat[1][10] = 'i';
                            mat[1][14] = 't';
                            mat[1][18] = 'c';
                            mat[1][22] = 'h';
                            certas++;
                            very = 1;
                            very2++;
                            conts = 2;
                        }else{
                                printf("Voce errou!\n");
                                very = 0;
                                conts++;
                            }
                        if (conts >= 2 && very != 1){//verifica se a quantidade de tentativas noi foi batida
                            printf("Suas chances acabaram para essa pergunta\n");  
                            very = 1;
                            very2++;
                        }
                    }else{
                        printf("\nVoce ja tentou essa pergunta!\n");
                        very = 1;
                    }
                    break;
                case 3:
                    if(contv != 2){
                        printf("Qual seu chute: ");
                        gets(chute);
                        fflush(stdin);
                        if (!strcmp(mat1[2], chute)){
                            printf("Parabens, voce acertou\n");
                            mat[2][2] = 'v';
                            mat[2][6] = 'e';
                            mat[2][10] = 't';
                            mat[2][14] = 'o';
                            mat[2][18] = 'r';
                            certas++;
                            very = 1;
                            very2++;
                            contv = 2;
                        }else{
                                printf("Voce errou!\n");
                                very = 0;
                                contv++;
                            }
                        if (contv >= 2 && very != 1){//verifica se a quantidade de tentativas noi foi batida
                            printf("Suas chances acabaram para essa pergunta\n");  
                            very = 1;
                            very2++;
                        }
                    }else{
                        printf("\nVoce ja tentou essa pergunta!\n");
                        very = 1;
                    }
                    break;
                case 4:
                    if(contf != 2){
                        printf("Qual seu chute: ");
                        gets(chute);
                        fflush(stdin);
                        if (!strcmp(mat1[3], chute)){
                            printf("Parabens, voce acertou\n");
                            mat[3][2] = 'f';
                            mat[3][6] = 'o';
                            mat[3][10] = 'r';
                            certas++;
                            very = 1;
                            very2++;
                            contf = 2;
                        }else{
                                printf("Voce errou!\n");
                                very = 0;
                                contf++;
                            }
                        if (contf >= 2 && very != 1){//verifica se a quantidade de tentativas noi foi batida
                            printf("Suas chances acabaram para essa pergunta\n");  
                            very = 1;
                            very2++;
                        }
                    }else{
                        printf("\nVoce ja tentou essa pergunta!\n");
                        very = 1;
                    }
                    break;
                case 5:
                    if(contp != 2){
                        printf("Qual seu chute: ");
                        gets(chute);
                        fflush(stdin);
                        if (!strcmp(mat1[4], chute)){
                            printf("Parabens, voce acertou\n");
                            mat[4][2] = 'p';
                            mat[4][6] = 'r';
                            mat[4][10] = 'i';
                            mat[4][14] = 'n';
                            mat[4][18] = 't';
                            mat[4][22] = 'f';
                            certas++;
                            very = 1;
                            very2++;
                            contp = 2;
                        }else{
                                printf("Voce errou!\n");
                                very = 0;
                                contp++;
                            }
                        if (contp >= 2 && very != 1){//verifica se a quantidade de tentativas noi foi batida
                            printf("Suas chances acabaram para essa pergunta\n");  
                            very = 1;
                            very2++;
                        }
                    }else{
                        printf("\nVoce ja tentou essa pergunta!\n");
                        very = 1;
                    }
                    break;
                default:
                    break;
                }
            }while (very != 1);
    }while(very2 != 5);
    printf("\nVoce acertou %i de 5 perguntas\n", certas);
    for (int i = 0; i < 5; i++){
        printf("%i- %s\n", i + 1, mat[i]);
    }
    mat[0][2] = 'w';
    mat[0][6] = 'h';
    mat[0][10] = 'i';
    mat[0][14] = 'l';
    mat[0][18] = 'e';
    mat[1][2] = 's';
    mat[1][6] = 'w';
    mat[1][10] = 'i';
    mat[1][14] = 't';
    mat[1][18] = 'c';
    mat[1][22] = 'h';
    mat[2][2] = 'v';
    mat[2][6] = 'e';
    mat[2][10] = 't';
    mat[2][14] = 'o';
    mat[2][18] = 'r';
    mat[3][2] = 'f';
    mat[3][6] = 'o';
    mat[3][10] = 'r';
    mat[4][2] = 'p';
    mat[4][6] = 'r';
    mat[4][10] = 'i';
    mat[4][14] = 'n';
    mat[4][18] = 't';
    mat[4][22] = 'f';
    printf("Aqui esta o gabarito\n");
    for (int i = 0; i < 5; i++){
        printf("%i- %s\n", i + 1, mat[i]);
    }
}