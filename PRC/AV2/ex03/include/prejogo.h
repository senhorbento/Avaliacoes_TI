#ifndef _PREJOGO_H_
#define _PREJOGO_H_

#include "uteis.h"

void lerJogadores(char nome1[], char nome2[]);
void quemInicia(TNecessario *jogo);
void escolhaSimbolo(TNecessario *jogo);
void limparTabuleiro(char n[_MAX_TABULEIRO_][_MAX_TABULEIRO_]);

#endif