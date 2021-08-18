#include <stdio.h>

#include "uteis.h"
#include "finds.h"
#include "menus.h"
#include "arquivo.h"

void lerContato(TContato *contato){
    printf("Digite o nome do contato:\n");
    lerString((*contato).nome, _MAX_NOME_);
    printf("Digite o email do contato:\n");
    lerString((*contato).email, _MAX_EMAIL_);
    printf("Digite o telefone do contato:\n");
    lerString((*contato).telefone, _MAX_TELEFONE_);
    limparTela();
    printf("Contato inserido com sucesso!\n");
    pausar();  
}

void inserir(TAgenda *agenda){
    lerContato(&(*agenda).contato[(*agenda).qtd]);
    gravarArquivo("agenda.txt", *agenda);
    (*agenda).qtd++;
}

void remover(TAgenda *agenda){
    int procura;
    procura=encontrarContato(*agenda);
    if(procura>=0){
        (*agenda).contato[procura]=(*agenda).contato[(*agenda).qtd-1];
        (*agenda).qtd--;
        salvarModificacao("agenda.txt", *agenda);
        limparTela();
        printf("Contato removido com sucesso!\n");
        pausar();
    }
    else{
        limparTela();
        printf("Contato nao encontrado!\n");
        pausar();
    }
}

void listarTodos(TContato contato[], int qtd){
    int i;
    for(i=0;i<qtd;i++)
        printf("%s %s %s\n", contato[i].nome, contato[i].email, contato[i].telefone);
    pausar();
}

void listarParte(TAgenda agenda){
    int selecao;
    do{
        limparTela();
        do{
            submenu();
            scanf("%d", &selecao);
            if(selecao < 0 || selecao > 3){
                limparTela();
                printf("Valor incorreto favor informar um numero entre \"0\" e \"3\"\n\n");
            }
        }while(selecao < 0 || selecao > 3);
        limparTela();
        switch (selecao)
        {
            case 0: break;
            case 1: findNome(agenda); break;
            case 2: findEmail(agenda); break;
            case 3: findTelefone(agenda); break;
        }
    }while(selecao != 0);
}