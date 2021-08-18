#include <stdio.h>
#include <string.h>

#include "uteis.h"

int encontrarContato(TAgenda agenda){
    char comparar[_MAX_EMAIL_];
    int i;
    printf("Favor digite o email do contato a ser removido: ");
    lerString(comparar,_MAX_EMAIL_);
    for(i=0;i<_MAX_EMAIL_;i++)
        if(strcmp(comparar, agenda.contato[i].email)==0)
            return i;
    return -1;
}

void findNome(TAgenda agenda){
    char comparar[_MAX_NOME_];
    int i,qtd=0;
    printf("Favor digite a parte do nome a ser filtrada: ");
    lerString(comparar,_MAX_NOME_);
    for(i=0;i<agenda.qtd;i++)
        if(strstr(agenda.contato[i].nome, comparar)>0){
            printf("%s %s %s\n", agenda.contato[i].nome, agenda.contato[i].email, agenda.contato[i].telefone);
            qtd++;
        }
    if(qtd==0)
        printf("Nao foi possivel encontrar nenhum contato com esse filtro\n");
    pausar();
}

void findEmail(TAgenda agenda){
    char comparar[_MAX_EMAIL_];
    int i,qtd=0;
    printf("Favor digite a parte do email a ser filtrada: ");
    lerString(comparar,_MAX_EMAIL_);
    for(i=0;i<agenda.qtd;i++)
        if(strstr(agenda.contato[i].email, comparar)>0){
            printf("%s %s %s\n", agenda.contato[i].nome, agenda.contato[i].email, agenda.contato[i].telefone);
            qtd++;
        }
    if(qtd==0)
        printf("Nao foi possivel encontrar nenhum contato com esse filtro\n");
    pausar();
}

void findTelefone(TAgenda agenda){
    char comparar[_MAX_TELEFONE_];
    int i,qtd=0;
    printf("Favor digite a parte do telefone a ser filtrada: ");
    lerString(comparar,_MAX_TELEFONE_);
    for(i=0;i<agenda.qtd;i++)
        if(strstr(agenda.contato[i].telefone, comparar)>0){
            printf("%s %s %s\n", agenda.contato[i].nome, agenda.contato[i].email, agenda.contato[i].telefone);
            qtd++;
        }
    if(qtd==0)
        printf("Nao foi possivel encontrar nenhum contato com esse filtro\n");
    pausar();
}