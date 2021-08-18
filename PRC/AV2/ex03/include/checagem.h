#ifndef _CHECAGEM_H_
#define _CHECAGEM_H_

#include "uteis.h"

void checarVencedor(TNecessario jogo, int *jogada);
void checarHorizontal(TNecessario jogo, int *jogada);
void checarVertical(TNecessario jogo, int *jogada);
void checarDiagonal(TNecessario jogo, int *jogada);

#endif