#include <stdio.h>
#include <string.h>

#include "uteis.h"

void lerJogadores(char nome1[], char nome2[]){
    char resposta;

    limparTela();
    printf("Qual o nome do primeiro jogador?(Max 20 Caracteres) ");
    lerString(nome1, _MAX_NOME_);
    printf("\nQual o nome do segundo jogador?(Max 20 Caracteres) ");
    lerString(nome2, _MAX_NOME_);
    limparTela();
} 

void quemInicia(TNecessario *jogo){
    do{
        printf("Quem vai comecar (1)%s ou (2)%s?(1 ou 2) ", (*jogo).nome1, (*jogo).nome2);
        scanf("%d", &(*jogo).jogador);
        if((*jogo).jogador < 1 || (*jogo).jogador > 2)
            limparTela();
            printf("Termo incorreto, favor digitar \"1\" ou \"2\"\n");
    }while((*jogo).jogador < 1 || (*jogo).jogador > 2);
    limparTela();
}

void escolhaSimbolo(TNecessario *jogo){
    quemInicia(&*jogo);

    if((*jogo).jogador == 1){
        do{
            printf("Jogador %s escolhe X ou O: ", (*jogo).nome1);
            lerString((*jogo).j1, _MAX_NOME_);
            if(!(strcmp((*jogo).j1, "X") == 0 || strcmp((*jogo).j1, "x") == 0 || strcmp((*jogo).j1, "O") == 0 || strcmp((*jogo).j1, "o") == 0)){
                limparTela();
                printf("Termo incorreto, favor digitar \"X\" ou \"O\"\n\n");
            }
        }while(!(strcmp((*jogo).j1, "X") == 0 || strcmp((*jogo).j1, "x") == 0 || strcmp((*jogo).j1, "O") == 0 || strcmp((*jogo).j1, "o") == 0));

        if(strcmp((*jogo).j1, "X") == 0 || strcmp((*jogo).j1, "x") == 0){
            strcpy((*jogo).j1, "X");
            strcpy((*jogo).j2, "O");
        }
        else{
            strcpy((*jogo).j1, "O");
            strcpy((*jogo).j2, "X");
        }
    }

    else{
        do{
            printf("Jogador %s escolhe X ou O: ", (*jogo).nome2);
            lerString((*jogo).j2, _MAX_NOME_);
            limparBuffer();
            if(!(strcmp((*jogo).j2, "X") == 0 || strcmp((*jogo).j2, "x") == 0 || strcmp((*jogo).j2, "O") == 0 || strcmp((*jogo).j2, "o") == 0)){
                limparTela();
                printf("Termo incorreto, favor digitar \"X\" ou \"O\"\n\n");
            }
        }while(!(strcmp((*jogo).j2, "X") == 0 || strcmp((*jogo).j2, "x") == 0 || strcmp((*jogo).j2, "O") == 0 || strcmp((*jogo).j2, "o") == 0));

        if(strcmp((*jogo).j2, "X") == 0 || strcmp((*jogo).j2, "x") == 0){
            (*jogo).j2[0] = 'X';
            (*jogo).j1[0] = 'O';
        }
        else{
            (*jogo).j2[0] = 'O';
            (*jogo).j1[0] = 'X';
        }
    }
    
    limparTela();
}

void limparTabuleiro(char n[_MAX_TABULEIRO_][_MAX_TABULEIRO_]){
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            n[i][j] = ' ';
}