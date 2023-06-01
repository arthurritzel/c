#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char mat1[5][11] = {"eniac", "microsoft", "internet", "robotica", "smartphone"},
    mat[5][30] = {"\t| | | | | |*|*|*|*|*|", "\t| | | | | | | | | |*|", "\t| | | | | | | | |*|*|", "\t| | | | | | | | |*|*|", "\t| | | | | | | | | | |"}, chute[11];
    int i, esc, very = 0, very2 = 0, contw = 0, conts = 0, contv = 0, contf = 0, contp = 0, certas = 0;

    printf("\n\t---WordPlay Tecnologia---\n\n\n");

    do{
        very = 0;
        for (i = 0; i < 5; i++){
            printf("%i- %s\n\n", i + 1, mat[i]);
        }
        printf("1----->\tO primeiro computador do mundo:\n");

        printf("\n2----->\tO pioneiro dos sistemas operacionais:\n");

        printf("\n3----->\tRede de computadores dispersos por todo o planeta que trocam dados e mensagens:\n");

        printf("\n4----->\tSurgiu no inicio do seculo XX, com a necessidade de aumentar a produtividade e melhorar qualidade dos produtos:\n");

        printf("\n5----->\tAparelho que possibilita enviar mensagens, receber ligacoes, fazer anotacoes e ouvir musicas:\n");

        printf("\n\tEscolha uma alternativa: ");
        scanf("%i", &esc);
        fflush(stdin);

            do{
                switch (esc){
                case 1:

                    if(contw != 2){
                        printf("\n\tQual seu palpite: ");
                        gets(chute);
                        fflush(stdin);

                            if (!strcmp(mat1[0], chute)){
                                printf("\n\tParabens, voce acertou!\n");
                                mat[0][2] = 'e';
                                mat[0][4] = 'n';
                                mat[0][6] = 'i';
                                mat[0][8] = 'a';
                                mat[0][10] = 'c';
                                certas++;
                                very = 1;
                                very2++;
                                contw = 2;
                            }
                            else{
                                printf("\n\tVoce errou!\n");
                                very = 0;
                                contw++;
                                }
                            if (contw >= 2 && very != 1){
                                printf("\n\tSuas chances acabaram para essa pergunta!\n");
                                very = 1;
                                very2++;
                            }
                    }else{
                        printf("\n\tVoce ja tentou essa pergunta!\n");
                        very = 1;
                    }

                    break;

                case 2:

                    if(conts != 2){
                        printf("\n\tQual seu palpite: ");
                        gets(chute);
                        fflush(stdin);

                        if (!strcmp(mat1[1], chute)){
                            printf("\n\tParabens, voce acertou!\n");
                            mat[1][2] = 'm';
                            mat[1][4] = 'i';
                            mat[1][6] = 'c';
                            mat[1][8] = 'r';
                            mat[1][10] = 'o';
                            mat[1][12] = 's';
                            mat[1][14] = 'o';
                            mat[1][16] = 'f';
                            mat[1][18] = 't';
                            certas++;
                            very = 1;
                            very2++;
                            conts = 2;
                        }
                        else{
                            printf("\n\tVoce errou!\n");
                            very = 0;
                            conts++;
                            }

                        if (conts >= 2 && very != 1){
                            printf("\n\tSuas chances acabaram para essa pergunta!\n");
                            very = 1;
                            very2++;
                        }
                    }else{
                        printf("\n\tVoce ja tentou essa pergunta!\n");
                        very = 1;
                    }
                    break;

                case 3:

                    if(contv != 2){
                        printf("\n\tQual seu palpite: ");
                        gets(chute);
                        fflush(stdin);

                        if (!strcmp(mat1[2], chute)){
                            printf("\n\tParabens, voce acertou!\n");
                            mat[2][2] = 'i';
                            mat[2][4] = 'n';
                            mat[2][6] = 't';
                            mat[2][8] = 'e';
                            mat[2][10] = 'r';
                            mat[2][12] = 'n';
                            mat[2][14] = 'e';
                            mat[2][16] = 't';
                            certas++;
                            very = 1;
                            very2++;
                            contv = 2;
                        }
                        else{
                            printf("\n\tVoce errou!\n");
                            very = 0;
                            contv++;
                            }

                        if (contv >= 2 && very != 1){
                            printf("\n\tSuas chances acabaram para essa pergunta!\n");
                            very = 1;
                            very2++;
                        }
                    }else{
                        printf("\n\tVoce ja tentou essa pergunta!\n");
                        very = 1;
                    }
                    break;

                case 4:

                    if(contf != 2){
                        printf("\n\tQual seu palpite: ");
                        gets(chute);
                        fflush(stdin);

                        if (!strcmp(mat1[3], chute)){
                            printf("\n\tParabens, voce acertou!\n");
                            mat[3][2] = 'r';
                            mat[3][4] = 'o';
                            mat[3][6] = 'b';
                            mat[3][8] = 'o';
                            mat[3][10] = 't';
                            mat[3][12] = 'i';
                            mat[3][14] = 'c';
                            mat[3][16] = 'a';
                            certas++;
                            very = 1;
                            very2++;
                            contf = 2;
                        }
                        else{
                            printf("\n\tVoce errou!\n");
                            very = 0;
                            contf++;
                            }

                        if (contf >= 2 && very != 1){
                            printf("\n\tSuas chances acabaram para essa pergunta!\n");
                            very = 1;
                            very2++;
                        }
                    }else{
                        printf("\n\tVoce ja tentou essa pergunta!\n");
                        very = 1;
                    }
                    break;

                case 5:

                    if(contp != 2){
                        printf("\n\tQual seu palpite: ");
                        gets(chute);
                        fflush(stdin);

                        if (!strcmp(mat1[4], chute)){
                            printf("\n\tParabens, voce acertou!\n\n");
                            mat[4][2] = 's';
                            mat[4][4] = 'm';
                            mat[4][6] = 'a';
                            mat[4][8] = 'r';
                            mat[4][10] = 't';
                            mat[4][12] = 'p';
                            mat[4][14] = 'h';
                            mat[4][16] = 'o';
                            mat[4][18] = 'n';
                            mat[4][20] = 'e';
                            certas++;
                            very = 1;
                            very2++;
                            contp = 2;
                        }
                        else{
                            printf("\n\tVoce errou!\n");
                            very = 0;
                            contp++;
                            }

                        if (contp >= 2 && very != 1){
                            printf("\n\tSuas chances acabaram para essa pergunta!\n");
                            very = 1;
                            very2++;
                        }
                    }else{
                        printf("\n\tVoce ja tentou essa pergunta!\n");
                        very = 1;
                    }
                    break;
                default:
                    break;
                }
            }
            while (very != 1);
            printf("*********************************************************************************\n\n");
    }
    while(very2 != 5);

    printf("\n\tVoce acertou %i de 5 perguntas\n", certas);

    for (i = 0; i < 5; i++){
        printf("%i- %s\n", i + 1, mat[i]);
    }
    mat[0][2] = 'e';
    mat[0][4] = 'n';
    mat[0][6] = 'i';
    mat[0][8] = 'a';
    mat[0][10] = 'c';
    mat[1][2] = 'm';
    mat[1][4] = 'i';
    mat[1][6] = 'c';
    mat[1][8] = 'r';
    mat[1][10] = 'o';
    mat[1][12] = 's';
    mat[1][14] = 'o';
    mat[1][16] = 'f';
    mat[1][18] = 't';
    mat[2][2] = 'i';
    mat[2][4] = 'n';
    mat[2][6] = 't';
    mat[2][8] = 'e';
    mat[2][10] = 'r';
    mat[2][12] = 'n';
    mat[2][14] = 'e';
    mat[2][16] = 't';
    mat[3][2] = 'r';
    mat[3][4] = 'o';
    mat[3][6] = 'b';
    mat[3][8] = 'o';
    mat[3][10] = 't';
    mat[3][12] = 'i';
    mat[3][14] = 'c';
    mat[3][16] = 'a';
    mat[4][2] = 's';
    mat[4][4] = 'm';
    mat[4][6] = 'a';
    mat[4][8] = 'r';
    mat[4][10] = 't';
    mat[4][12] = 'p';
    mat[4][14] = 'h';
    mat[4][16] = 'o';
    mat[4][18] = 'n';
    mat[4][20] = 'e';

    printf("\n\tAqui esta o gabarito\n");

    for (i = 0; i < 5; i++){
        printf("%i- %s\n", i + 1, mat[i]);
    }

    system("pause");
}
