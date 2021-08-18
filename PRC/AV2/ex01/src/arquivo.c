#include <stdio.h>

#include "uteis.h"

void gravarArquivo(char arquivo[], TAgenda n){
    FILE *arq;
    arq = fopen(arquivo, "at");
    if (arq!=NULL){
        fprintf(arq,"%s,%s,%s\n", n.contato[n.qtd].nome, n.contato[n.qtd].email, n.contato[n.qtd].telefone);
    }
    fclose(arq);
}

void salvarModificacao(char arquivo[], TAgenda n){
    FILE *arq;
    arq = fopen(arquivo, "wt");
    if (arq!=NULL){
        int i;
        for(i=0;i<n.qtd;i++)
            fprintf(arq,"%s,%s,%s\n", n.contato[i].nome, n.contato[i].email, n.contato[i].telefone);
    }
    fclose(arq);
}

void lerArquivo(char arquivo[], TAgenda *n){
    FILE *arq;
    arq = fopen(arquivo, "rt");
    if (arq!=NULL){
        while(!feof(arq)){
            fscanf(arq,"%[^,],%[^,],%[^\n]\n", (*n).contato[(*n).qtd].nome, (*n).contato[(*n).qtd].email, (*n).contato[(*n).qtd].telefone);
            (*n).qtd++;
        }
    }
    fclose(arq);
}