#include <stdio.h>

#include "uteis.h"
#include "operacoes.h"
#include "manipulacao.h"

int main(){
    TConjunto a,b,resultado;
    int continuar;
    do{
        quantidade(&a.qtd, &b.qtd);
        lerConjunto(&a, "A");
        lerConjunto(&b, "B");
        limparTela();
        uniao(a,b,&resultado);
        mostrarConjunto(resultado, "Uniao");
        interseccao(a,b,&resultado);
        mostrarConjunto(resultado, "Interseccao");
        diferenca(a,b,&resultado);
        mostrarConjunto(resultado, "Diferenca");
        do{
            printf("Nova consulta? 1-Sim 0-Nao\n");
            scanf("%d", &continuar);
            if(continuar < 0  || continuar > 1)
                printf("Favor digitar somente \"0\" ou \"1\"\n\n");
        }while(continuar < 0  || continuar > 1);
    }while(continuar == 1);
    printf("Obrigado por utilizar o programa e ate a proxima =)\n");
    pausar();
    return 0;
}