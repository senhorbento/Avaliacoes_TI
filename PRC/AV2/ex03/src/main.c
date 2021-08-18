#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "uteis.h"
#include "prejogo.h"
#include "durante_jogo.h"

int main(){
    TNecessario jogo;
    int continuar;
    do{
        lerJogadores(jogo.nome1, jogo.nome2);
        escolhaSimbolo(&jogo);
        jogando(&jogo);
        do{
            printf("Nova Partida? 1-Sim 0-Nao\n");
            scanf("%d", &continuar);
            if(continuar < 0  || continuar > 1)
                printf("Favor digitar somente \"0\" ou \"1\"\n\n");
        }while(continuar < 0  || continuar > 1);
    }while(continuar == 1);
    printf("Obrigado por jogar e ate a proxima =)\n");
    pausar();
    return 0;
}