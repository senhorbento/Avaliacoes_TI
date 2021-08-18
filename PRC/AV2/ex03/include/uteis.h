#ifndef _UTEIS_H_
#define _UTEIS_H_

#define _MAX_NOME_ 21
#define _MAX_TABULEIRO_ 3

typedef struct{
    char tabuleiro[_MAX_TABULEIRO_][_MAX_TABULEIRO_],j1[_MAX_NOME_],j2[_MAX_NOME_], nome1[_MAX_NOME_], nome2[_MAX_NOME_];
    int jogador,x,y;
}TNecessario;

void limparTela();
void limparBuffer();
void pausar();
void lerString(char string[], int max);

#endif