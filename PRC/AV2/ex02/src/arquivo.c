#include <stdio.h>

#include "uteis.h"

void gravarArquivo(char arquivo[], TLoja n){
    FILE *arq;
    arq = fopen(arquivo, "at");
    if (arq!=NULL){
        if(n.qtdLoja > 0)
            fprintf(arq,"\n");
        fprintf(arq,"%s,%s,%d %d %lf", n.total[n.qtdLoja].categoria, n.total[n.qtdLoja].nome,n.total[n.qtdLoja].codigo, n.total[n.qtdLoja].quantidade, n.total[n.qtdLoja].preco);
    }
    fclose(arq);
}

void salvarModificacao(char arquivo[], TLoja n){
    FILE *arq;
    arq = fopen(arquivo, "wt");
    if (arq!=NULL){
        int i;
        for(i=0;i<n.qtdLoja;i++){
            fprintf(arq,"%s,%s,%d %d %lf", n.total[n.qtdLoja].categoria, n.total[n.qtdLoja].nome,n.total[n.qtdLoja].codigo, n.total[n.qtdLoja].quantidade, n.total[n.qtdLoja].preco);
            if (i<n.qtdLoja-1)
                fprintf(arq,"\n");
        }
    }
    fclose(arq);
}

void lerArquivo(char arquivo[], TLoja *n){
    FILE *arq;
    arq = fopen(arquivo, "rt");
    if (arq!=NULL){
        while(!feof(arq)){
            fscanf(arq," %[^,],", (*n).total[(*n).qtdLoja].categoria);
            fscanf(arq,"%[^,],", (*n).total[(*n).qtdLoja].nome);
            fscanf(arq,"%d", &(*n).total[(*n).qtdLoja].codigo);
            fscanf(arq,"%d", &(*n).total[(*n).qtdLoja].quantidade);
            fscanf(arq,"%lf", &(*n).total[(*n).qtdLoja].preco);           
            (*n).qtdLoja++;
        }
    }
    fclose(arq);
}