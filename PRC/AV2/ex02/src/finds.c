#include <stdio.h>
#include <string.h>

#include "uteis.h"

int findCodigo(TLoja l){
    int i,comparar;
    printf("Favor digite o codigo do brinquedo: ");
    scanf("%d", &comparar);
    for(i=0;i<l.qtdLoja;i++)
        if(l.total[i].codigo == comparar)
            return i;
    return -1;
}

void findParteNome(TLoja l){
    char comparar[_MAX_NOME_];
    int i,qtd=0;
    printf("Favor digite a parte do nome a ser filtrada: ");
    lerString(comparar,_MAX_NOME_);
    for(i=0;i<l.qtdLoja;i++)
        if(strstr(l.total[i].nome, comparar)>0){
            printf("%d %d %s %s %lf\n", l.total[i].codigo, l.total[i].quantidade, l.total[i].categoria, l.total[i].nome, l.total[i].preco);
            qtd++;
        }
    if(qtd==0)
        printf("Nao foi possivel encontrar nenhum nome com esse filtro\n");
    pausar();
}

void findParteCategoria(TLoja l){
    char comparar[_MAX_CATEGORIA_];
    int i,qtd=0;
    printf("Favor digite a parte do nome a ser filtrada: ");
    lerString(comparar,_MAX_CATEGORIA_);
    for(i=0;i<l.qtdLoja;i++)
        if(strstr(l.total[i].categoria, comparar)>0){
            printf("%d %d %s %s %lf\n", l.total[i].codigo, l.total[i].quantidade, l.total[i].categoria, l.total[i].nome, l.total[i].preco);
            qtd++;
        }
    if(qtd==0)
        printf("Nao foi possivel encontrar nenhuma categoria com esse filtro\n");
    pausar();
}