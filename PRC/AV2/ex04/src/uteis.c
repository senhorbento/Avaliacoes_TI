#include <stdio.h>
#include <stdlib.h>

#include "uteis.h"

int comparadorQsort(const void *a, const void *b){
   return ( *(double*)a - *(double*)b );
}

int checarElemento(TConjunto n, double duvidoso){
    int i;
    for(i=0;i<n.qtd;i++)
        if(n.conjunto[i]==duvidoso) return 1;
    return 0;
}

int checarNoConjunto(TConjunto n, int qtd){
    int i;
    for(i=0;i<qtd;i++)
        if(n.conjunto[i]==n.conjunto[qtd]) return 1;
    return 0;
}

void copiarConjunto(TConjunto a,TConjunto *resultado){
    int i;
    for(i=0;i<a.qtd;i++)
        (*resultado).conjunto[i]=a.conjunto[i];
    (*resultado).qtd=a.qtd;
}

void limparTela(){
    system("clear || cls");
}

void pausar(){
    printf("\n");
    system("pause || (echo Pressione qualquer tecla... && read-n1)");
}
