#include <stdio.h>

#include "uteis.h"
#include "durante_jogo.h"

void checarHorizontal(TNecessario jogo, int *jogada){

    if(jogo.tabuleiro[0][0] == 'X' && jogo.tabuleiro[0][1] == 'X' && jogo.tabuleiro[0][2] == 'X'){
        if(jogo.j1[0] == 'X'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }
    else if(jogo.tabuleiro[0][0] == 'O' && jogo.tabuleiro[0][1] == 'O' && jogo.tabuleiro[0][2] == 'O'){
        if(jogo.j1[0] == 'O'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }
    else if(jogo.tabuleiro[1][0] == 'X' && jogo.tabuleiro[1][1] == 'X' && jogo.tabuleiro[1][2] == 'X'){
        if(jogo.j1[0] == 'X'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }
    else if(jogo.tabuleiro[1][0] == 'O' && jogo.tabuleiro[1][1] == 'O' && jogo.tabuleiro[1][2] == 'O'){
        if(jogo.j1[0] == 'O'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }
    else if(jogo.tabuleiro[2][0] == 'X' && jogo.tabuleiro[2][1] == 'X' && jogo.tabuleiro[2][2] == 'X'){
        if(jogo.j1[0] == 'X'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }
    else if(jogo.tabuleiro[2][0] == 'O' && jogo.tabuleiro[2][1] == 'O' && jogo.tabuleiro[2][2] == 'O'){
        if(jogo.j1[0] == 'O'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }
}

void checarVertical(TNecessario jogo, int *jogada){
    if(jogo.tabuleiro[0][0] == 'X' && jogo.tabuleiro[1][0] == 'X' && jogo.tabuleiro[2][0] == 'X'){
        if(jogo.j1[0] == 'X'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }
    else if(jogo.tabuleiro[0][0] == 'O' && jogo.tabuleiro[1][0] == 'O' && jogo.tabuleiro[2][0] == 'O'){
        if(jogo.j1[0] == 'O'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }
    else if(jogo.tabuleiro[0][1] == 'X' && jogo.tabuleiro[1][1] == 'X' && jogo.tabuleiro[2][1] == 'X'){
        if(jogo.j1[0] == 'X'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }
    else if(jogo.tabuleiro[0][1] == 'O' && jogo.tabuleiro[1][1] == 'O' && jogo.tabuleiro[2][1] == 'O'){
        if(jogo.j1[0] == 'O'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }
    else if(jogo.tabuleiro[0][2] == 'X' && jogo.tabuleiro[1][2] == 'X' && jogo.tabuleiro[2][2] == 'X'){
        if(jogo.j1[0] == 'X'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }
    else if(jogo.tabuleiro[0][2] == 'O' && jogo.tabuleiro[1][2] == 'O' && jogo.tabuleiro[2][2] == 'O'){
        if(jogo.j1[0] == 'O'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }
}

void checarDiagonal(TNecessario jogo, int *jogada){
    if(jogo.tabuleiro[0][0] == 'X' && jogo.tabuleiro[1][1] == 'X' && jogo.tabuleiro[2][2] == 'X'){
        if(jogo.j1[0] == 'X'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }
    else if(jogo.tabuleiro[0][0] == 'O' && jogo.tabuleiro[1][1] == 'O' && jogo.tabuleiro[2][2] == 'O'){
        if(jogo.j1[0] == 'O'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }
    else if(jogo.tabuleiro[0][2] == 'X' && jogo.tabuleiro[1][1] == 'X' && jogo.tabuleiro[2][0] == 'X'){
        if(jogo.j1[0] == 'X'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }
    else if(jogo.tabuleiro[0][2] == 'O' && jogo.tabuleiro[1][1] == 'O' && jogo.tabuleiro[2][0] == 'O'){
        if(jogo.j1[0] == 'O'){
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome1);
        }
        else{
            limparTela();
            mostrarTabuleiro(jogo.tabuleiro);
            printf("Jogador %s venceu a partida, parabens =)\n\n", jogo.nome2);
        }
        *jogada=11;
    }

}

void checarVencedor(TNecessario jogo, int *jogada){
    checarHorizontal(jogo, &*jogada);
    checarVertical(jogo, &*jogada);
    checarDiagonal(jogo, &*jogada);
}