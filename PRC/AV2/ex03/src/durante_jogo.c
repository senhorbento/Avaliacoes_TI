#include <stdio.h>

#include "uteis.h"
#include "prejogo.h"
#include "checagem.h"

void mostrarTabuleiro(char n[_MAX_TABULEIRO_][_MAX_TABULEIRO_]){
    printf("\t   1   2   3\n");
    printf("\t1  %c | %c | %c\n",n[0][0],n[0][1],n[0][2]);
    printf("\t  -----------   \n");
    printf("\t2  %c | %c | %c\n",n[1][0],n[1][1],n[1][2]);
    printf("\t  -----------   \n");
    printf("\t3  %c | %c | %c\n\n",n[2][0],n[2][1],n[2][2]);
}

void jogando(TNecessario *jogo){
    int jogada=1;
    limparTabuleiro((*jogo).tabuleiro);
    while(jogada < 10){
        if((*jogo).jogador == 1){
            do{
                printf("\tVez de %s \"%c\"\n\n", (*jogo).nome1,(*jogo).j1[0]);
                mostrarTabuleiro((*jogo).tabuleiro);
                printf("Qual linha? ");
                scanf("%d", &(*jogo).x);
                printf("E qual coluna? ");
                scanf("%d", &(*jogo).y);
                if((*jogo).tabuleiro[(*jogo).x-1][(*jogo).y-1] != ' '){
                    limparTela();
                    printf("Coordenadas incorretas, favor digitar novamente\n\n");
                }
            }while((*jogo).tabuleiro[(*jogo).x-1][(*jogo).y-1] != ' ');
            (*jogo).tabuleiro[(*jogo).x-1][(*jogo).y-1] = (*jogo).j1[0];
            (*jogo).jogador = 2;
            jogada++;
            limparTela(); 
        }
        else if((*jogo).jogador == 2){
            do{
                printf("\tVez de %s \"%c\"\n\n", (*jogo).nome2,(*jogo).j2[0]);
                mostrarTabuleiro((*jogo).tabuleiro);
                printf("Qual linha? ");
                scanf("%d", &(*jogo).x);
                printf("E qual coluna? ");
                scanf("%d", &(*jogo).y);
                if((*jogo).tabuleiro[(*jogo).x-1][(*jogo).y-1] != ' '){
                    limparTela();
                    printf("Coordenadas incorretas, favor digitar novamente\n\n");
                }
            }while((*jogo).tabuleiro[(*jogo).x-1][(*jogo).y-1] != ' ');
            (*jogo).tabuleiro[(*jogo).x-1][(*jogo).y-1] = (*jogo).j2[0];
            (*jogo).jogador = 1;
            jogada++;
            limparTela();
        }
        if(jogada>4)
            checarVencedor(*jogo, &jogada);
        if(jogada == 10){
            mostrarTabuleiro((*jogo).tabuleiro);
            printf("Deu velha :)\n\n");
        }
    }
}

