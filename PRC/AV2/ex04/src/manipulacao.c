#include <stdio.h>
#include <stdlib.h>

#include "uteis.h"

void quantidade(int *a, int *b){
    limparTela();
    printf("Quantos elementos tem no primeiro conjunto?(Max 100) ");
    do{
        scanf("%d", &*a);
        if(*a>100 || *a<0) 
            printf("Quantidade incorreta, favor digitar um valor entre 0-100: ");
    }while(*a>100 || *a<0);
    
    printf("\nQuantos elementos tem no segundo conjunto?(Max 100) ");
    do{
        scanf("%d", &*b);
        if(*b>100 || *b<0) 
            printf("Quantidade incorreta, favor digitar um valor entre 0-100: ");
    }while(*b>100 || *b<0);
}

void lerConjunto(TConjunto *n, char nome[]){
    int i;
    limparTela();
    printf("Leitura do conjunto %s \n\n", nome);
    for(i=0;i<(*n).qtd;i++)
        do{
            printf("Digite o %d elemento: ",i+1);
            scanf("%lf", &(*n).conjunto[i]);
        }while(checarNoConjunto(*n,i)==1);
    printf("\n");
}

void mostrarConjunto(TConjunto n, char operacao[]){
    int i;
    qsort(n.conjunto, n.qtd, sizeof(double), comparadorQsort);
    printf("%s = ", operacao);
    if(n.qtd==0){
        printf("Nenhum termo corresponde a %s dos conjuntos!\n", operacao);
    }
    else{
        for(i=0;i<n.qtd;i++){
            printf("%.2lf ",n.conjunto[i]);
        }
        printf("\n");
    }
}