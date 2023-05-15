#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char 
    mat1[5][11] = {"while", "switch", "vetor", "for", "printf"},
    mat[5][30] = {"| w | h | i | l | e |", "| s | w | i | t | c | h |", "| v | e | t | o | r |", "| f | o | r |", "| p | r | i | n | t | f |"}, 
    displaywhile[23]={'|', ' ', '*', ' ', '|', ' ', '*', ' ', '|', ' ', '*', ' ', '|', ' ', '*', ' ', '|', ' ', '*', ' ', '|'}, 
    displayswitch[28]={'|', ' ', '*', ' ', '|', ' ', '*', ' ', '|', ' ', '*', ' ', '|', ' ', '*', ' ', '|', ' ', '*', ' ', '|', ' ', '*', ' ', '|'}, 
    displayvet[23]={'|', ' ', '*', ' ', '|', ' ', '*', ' ', '|', ' ', '*', ' ', '|', ' ', '*', ' ', '|', ' ', '*', ' ', '|'}, 
    displayfor[15]={'|', ' ', '*', ' ', '|', ' ', '*', ' ', '|', ' ', '*', ' ', '|'}, 
    displayprint[28]={'|', ' ', '*', ' ', '|', ' ', '*', ' ', '|', ' ', '*', ' ', '|', ' ', '*', ' ', '|', ' ', '*', ' ', '|', ' ', '*', ' ', '|'}, chute[11], letra;
    int modojogo, very = 0, cont = 0, certas = 0, conf = 0, cont2 = 0;

    
    printf("Escolha o modo de jogo\n[1]Voce tentara acertar a palavra inteira\n[2]Voce deve acertar uma letra de cada vez\n[3]Voce pode digitar letra por letra ou a palavra inteira\n->");
    scanf("%i", &modojogo);
    fflush(stdin);
   

    switch (modojogo){
    case 1://inicia o modo de jogo 1
        printf("\n\nVOCE TEM DUAS TENTATIVAS POR PALAVRA!\n\n");
        for(int i = 0; i < 5; i++){
            if (i == 0){
                printf("1 - Estrutura de repeticao em C\n|  |  |  |  |  |\n");
            }else if (i == 1){
                printf("2 - Estrutura condicional em C que aceita como parametro apenas um numero inteiro ou um caractere\n|  |  |  |  |  |  |\n");
            }else if (i == 2){
                printf("3 - Tipo de variavel que permite alocar mais de um valor dentro dela\n|  |  |  |  |  |\n");
            }else if (i == 3){
                printf("4 - Estrutua de repeticao conhecida como contadora\n|  |  |  |\n");
            }else if (i == 4){
                printf("5 - Nome do comando em C que permite escrever coisas na tela\n|  |  |  |  |  |  |\n");
            }

            do{//cria o loop de digitacao
                printf("Digite a %i resposta: ", i + 1);
                fflush(stdin);
                gets(chute);
                fflush(stdin); 

                if (!strcmp(mat1[i], chute)){//verifica se a palavra digitada e a correta
                    printf("\nVoce acertou\n");
                    if (i == 0){
                        printf("1 - Estrutura de repeticao em C\n| w | h | i | l | e |\n\n");
                    }else if (i == 1){
                        printf("2 - Estrutura condional em C que aceita como parametro apenas um numero inteiro ou um caractere\n| s | w | i | t | c | h |\n\n");
                    }else if (i == 2){
                        printf("3 - Tipo de variavel que permite alocar mais de um valor dentro dela\n| v | e | t | o | r |\n\n");
                    }else if (i == 3){
                        printf("4 - Estrutua de repeticao conhecida como contadora\n| f | o | r |\n\n");
                    }else if (i == 4){
                        printf("5 - Nome do comando em C que permite escrever coisas na tela\n| p | r | i | n | t | f |\n\n");
                    }
                    certas++;
                    very = 1;
                    cont = 0;
                }else{
                    printf("Voce errou!\n");
                    very = 0;
                    cont++;
                }
                if (cont >= 2){//verifica se a quantidade de tentativas noi foi batida
                    printf("Suas chances acabaram para essa pergunta\n");
                    very = 1;
                    cont = 0;
                }
            }while(very != 1);
            printf("\n---------------------------------------------------------------------\n\n");
        }
        break;

    case 2://inicia o modo de jogo 2
        printf("\n\nVOCE TEM NOVE TENTATIVAS POR PALAVRA!\n\n");
        for (int i = 0; i < 5; i++){
            very = 0;
            if (i == 0){
                printf("1 - Estrutura de repeticao em C\n| * | * | * | * | * |\n");
            }else if (i == 1){
                printf("2 - Estrutura condicional em C que aceita como parametro apenas um numero inteiro ou um caractere\n| * | * | * | * | * | * |\n");
            }else if (i == 2){
                printf("3 - Tipo de variavel que permite alocar mais de um valor dentro dela\n| * | * | * | * | * |\n");
            }else if (i == 3){
                printf("4 - Estrutua de repeticao conhecida como contadora\n| * | * | * |\n");
            }else if (i == 4){
                printf("5 - Nome do comando em C que permite escrever coisas na tela\n| * | * | * | * | * | * |\n");
            }
            cont = 0;
            do{//inicia o loop de digitacao
                printf("letra: ");
                scanf("%c", &letra);
                fflush(stdin);
                conf = 0;

                if (i == 0){//confere em qual palavra esta                    
                    for (int j = 0; j < 25 ; j++){
                        if (letra == mat[i][j]){//verifica se a letra digitada contem na palavra correta
                            displaywhile[j] = letra; 
                            conf = 1; 
                        }
                    }
                    if(!strcmp(displaywhile, mat[0])){
                        printf("\nVoce acertou!\n");
                        printf("1 - Estrutura de repeticao em C\n| w | h | i | l | e |\n\n");
                        very = 1;
                        certas++;
                    }else{
                        printf("%s\n", displaywhile);
                    }

                }else if (i == 1){
                    for (int j = 0; j < 28 ; j++){
                        if (letra == mat[i][j]){
                            displayswitch[j] = letra;    
                            conf = 1;  
                        }
                    }
                    if(!strcmp(displayswitch, mat[1])){
                        printf("\nVoce acertou!\n");
                        printf("2 - Estrutura condional em C que aceita como parametro apenas um numero inteiro ou um caractere\n| s | w | i | t | c | h |\n\n");
                        very = 1;
                        certas++;
                    }else{
                        printf("%s\n", displayswitch);
                    }

                }else if (i == 2){
                    for (int j = 0; j < 23 ; j++){
                        if (letra == mat[i][j]){
                            displayvet[j] = letra; 
                            conf = 1;     
                        }
                    }
                    if(!strcmp(displayvet, mat[2])){
                        printf("\nVoce acertou!\n");
                        printf("3 - Tipo de variavel que permite alocar mais de um valor dentro dela\n| v | e | t | o | r |\n\n");
                        very = 1;
                        certas++;
                    }else{
                        printf("%s\n", displayvet);
                    }

                }else if (i == 3){
                    for (int j = 0; j < 15 ; j++){
                        if (letra == mat[i][j]){
                            displayfor[j] = letra;  
                            conf = 1;    
                        }
                    }
                    if(!strcmp(displayfor, mat[3])){
                        printf("\nVoce acertou!\n");
                        printf("4 - Estrutua de repeticao conhecida como contadora\n| f | o | r |\n\n");
                        very = 1;
                        certas++;
                    }else{
                        printf("%s\n", displayfor);
                    }

                }else if (i == 4){
                    for (int j = 0; j < 28 ; j++){
                        if (letra == mat[i][j]){
                            displayprint[j] = letra;  
                            conf = 1;    
                        }
                    }
                    if(!strcmp(displayprint, mat[4])){
                        printf("\nVoce acertou!\n");
                        printf("5 - Nome do comando em C que permite escrever coisas na tela\n| p | r | i | n | t | f |\n\n");
                        very = 1;
                        certas++;
                    }else{
                        printf("%s\n", displayprint);
                    }
                }


                cont++;
                if(conf != 1){//caso a letra nao estja na palavra a variaver continua com 0 e n mostra
                    printf("A palavra nao possue essa letra\n");
                }
                if (cont == 9){//verifica se q quantidade de tentativas nao foi batida
                    printf("\nSuas chances para essa palavra acabaram\n");
                    very = 1;
                }
                
            }while(very != 1);
            printf("------------------------------------\n\n");
        }
        break;

    case 3://inicia o modo de jogo 3
        printf("\n\nVOCE TEM CINCO TENTATIVAS POR PALAVRA!\n\n");
        for (int i = 0; i < 5; i++){
            very = 0;
            cont = 0;
            if (i == 0){
                printf("1 - Estrutura de repeticao em C\n| * | * | * | * | * |\n");
            }else if (i == 1){
                printf("2 - Estrutura condicional em C que aceita como parametro apenas um numero inteiro ou um caractere\n| * | * | * | * | * | * |\n");
            }else if (i == 2){
                printf("3 - Tipo de variavel que permite alocar mais de um valor dentro dela\n| * | * | * | * | * |\n");
            }else if (i == 3){
                printf("4 - Estrutua de repeticao conhecida como contadora\n| * | * | * |\n");
            }else if (i == 4){
                printf("5 - Nome do comando em C que permite escrever coisas na tela\n| * | * | * | * | * | * |\n");
            }
            cont = 0;
            do{//inicia o loop de digitacao
                printf("resposta: ");
                gets(chute);
                fflush(stdin);
                conf = 0;
                for (int j = 0; mat1[i][j] != '\0'; j++){
                    for (int k = 0; chute[k] != '\0' ; k++){
                        if (chute[k] == mat1[i][j]){
                            if (i == 0){
                                if(j == 0){
                                    displaywhile[2] = chute[k];
                                }else if(j == 1){
                                    displaywhile[6] = chute[k];
                                }else if (j == 2){
                                    displaywhile[10] = chute[k];
                                }else if (j == 3){
                                    displaywhile[14] = chute[k];
                                }else if (j == 4){
                                    displaywhile[18] = chute[k];
                                }
                                printf("%s\n", displaywhile);

                                if(!strcmp(mat[0], displaywhile)){
                                    printf("\nVoce acertou!\n");
                                    very = 1;
                                    certas++;
                                }
                            }else if(i == 1){
                                if(j == 0){
                                    displayswitch[2] = chute[k];
                                }else if(j == 1){
                                    displayswitch[6] = chute[k];
                                }else if (j == 2){
                                    displayswitch[10] = chute[k];
                                }else if (j == 3){
                                    displayswitch[14] = chute[k];
                                }else if (j == 4){
                                    displayswitch[18] = chute[k];
                                }else if (j == 5){
                                    displayswitch[22] = chute[k];
                                }

                                printf("%s\n", displayswitch);
                                if(!strcmp(mat[1], displayswitch)){
                                    printf("\nVoce acertou!\n");
                                    very = 1;
                                    certas++;
                                }
                            }else if (i == 2){
                                if(j == 0){
                                    displayvet[2] = chute[k];
                                }else if(j == 1){
                                    displayvet[6] = chute[k];
                                }else if (j == 2){
                                    displayvet[10] = chute[k];
                                }else if (j == 3){
                                    displayvet[14] = chute[k];
                                }else if (j == 4){
                                    displayvet[18] = chute[k];
                                }
                                printf("%s\n", displayvet);

                                if(!strcmp(mat[2], displayvet)){
                                    printf("\nVoce acertou!\n");
                                    very = 1;
                                    certas++;
                                }
                            }else if(i == 3){
                                if(j == 0){
                                    displayfor[2] = chute[k];
                                }else if(j == 1){
                                    displayfor[6] = chute[k];
                                }else if (j == 2){
                                    displayfor[10] = chute[k];
                                }
                                printf("%s\n", displayfor);

                                if(!strcmp(mat[3], displayfor)){
                                    printf("\nVoce acertou!\n");
                                    very = 1;
                                    certas++;
                                }
                            }else if(i == 4){
                                if(j == 0){
                                    displayprint[2] = chute[k];
                                }else if(j == 1){
                                    displayprint[6] = chute[k];
                                }else if (j == 2){
                                    displayprint[10] = chute[k];
                                }else if (j == 3){
                                    displayprint[14] = chute[k];
                                }else if (j == 4){
                                    displayprint[18] = chute[k];
                                }else if(j == 5){
                                    displayprint[22] = chute[k];
                                }
                                printf("%s\n", displayprint);

                                if(!strcmp(mat[4], displayprint)){
                                    printf("\nVoce acertou!\n");
                                    very = 1;
                                    certas++;
                                }
                            }
                        }
                    }
                }
                cont++;
                if (cont == 5){
                    very = 1;
                    printf("\nSuas tentativas para essa palavra acabaram!\n");
                }
                
            }while(very != 1);
            printf("-------------------------------------\n");
        }
        break;
    default:
        break;
    }
    printf("Voce acertou %i de 5 palavras\n\nAqui esta o gabarito\n", certas);
    printf("1 - Estrutura de repeticao em C\n| w | h | i | l | e |\n");
    printf("2 - Estrutura condional em C que aceita como parametro apenas um numero inteiro ou um caractere\n| s | w | i | t | c | h |\n");
    printf("3 - Tipo de variavel que permite alocar mais de um valor dentro dela\n| v | e | t | o | r |\n");
    printf("4 - Estrutua de repeticao conhecida como contadora\n| f | o | r |\n");
    printf("5 - Nome do comando em C que permite escrever coisas na tela\n| p | r | i | n | t | f |\n");
}