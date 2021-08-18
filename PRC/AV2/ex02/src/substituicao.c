#include <stdio.h>
#include <string.h>

#include "uteis.h"
#include "arquivo.h"

void substituirCodigo(TLoja *l, int posicao){
    int novo;
    printf("Favor digite o novo codigo: ");
    scanf("%d", &novo);
    limparTela();
    (*l).total[posicao].codigo = novo;
    salvarModificacao("brinquedos.txt", *l);
    printf("Substituicao feita com sucesso!\n");
    pausar();
}

void substituirQuantidade(TLoja *l, int posicao){
    int novo;
    printf("Favor digite a nova quantidade: ");
    scanf("%d", &novo);
    limparTela();
    (*l).total[posicao].quantidade = novo;
    salvarModificacao("brinquedos.txt", *l);
    printf("Substituicao feita com sucesso!\n");
    pausar();
}

void substituirCategoria(TLoja *l, int posicao){
    char nova[_MAX_CATEGORIA_];
    int i,qtd=0;
    printf("Favor digite a nova categoria: ");
    lerString(nova,_MAX_CATEGORIA_);
    limparTela();
    strcpy((*l).total[posicao].categoria, nova);
    salvarModificacao("brinquedos.txt", *l);
    printf("Substituicao feita com sucesso!\n");
    pausar();
}
void substituirNome(TLoja *l, int posicao){
    char nova[_MAX_NOME_];
    int i,qtd=0;
    printf("Favor digite o novo nome: ");
    lerString(nova,_MAX_NOME_);
    limparTela();
    strcpy((*l).total[posicao].nome, nova);
    salvarModificacao("brinquedos.txt", *l);
    printf("Substituicao feita com sucesso!\n");
    pausar();
}
void substituirPreco(TLoja *l, int posicao){
    double novo;
    printf("Favor digite o novo preco: ");
    scanf("%lf", &novo);
    limparTela();
    (*l).total[posicao].preco = novo;
    salvarModificacao("brinquedos.txt", *l);
    printf("Substituicao feita com sucesso!\n");
    pausar();
}