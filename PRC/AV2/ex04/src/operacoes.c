#include <stdio.h>

#include "uteis.h"
#include "manipulacao.h"

void uniao(TConjunto a, TConjunto b, TConjunto *resultado){
    int i;
    copiarConjunto(a, &*resultado);
    for(i=0;i<b.qtd;i++)
        if(checarElemento(*resultado, b.conjunto[i])==0){
            (*resultado).conjunto[(*resultado).qtd]=b.conjunto[i];
            (*resultado).qtd++;
        }
}

void interseccao(TConjunto a, TConjunto b, TConjunto *resultado){
    int i;
    (*resultado).qtd=0;
    for(i=0;i<b.qtd;i++)
        if(checarElemento(a, b.conjunto[i])==1){
            (*resultado).conjunto[(*resultado).qtd]=b.conjunto[i];
            (*resultado).qtd++;
        }
}

void diferenca(TConjunto a, TConjunto b, TConjunto *resultado){
    int i;
    (*resultado).qtd=0;
    for(i=0;i<a.qtd;i++)
        if(checarElemento(b, a.conjunto[i])==0){
            (*resultado).conjunto[(*resultado).qtd]=a.conjunto[i];
            (*resultado).qtd++;
        }
}