#include <stdio.h>

#include "uteis.h"
#include "operacoes.h"
#include "menus.h"
#include "arquivo.h"

int main(){
    TAgenda agenda;
    int escolha;
    agenda.qtd=0;
    lerArquivo("agenda.txt", &agenda);
    do{
        limparTela();
        do{
            menu();
            scanf("%d", &escolha);
            if(escolha < 0 || escolha > 4){
                limparTela();
                printf("Valor incorreto favor informar um numero entre \"0\" e \"4\"\n\n");
            }
        }while(escolha < 0 || escolha > 4);
        limparTela();
        switch (escolha)
        {
            case 0: break;
            case 1: inserir(&agenda); break;
            case 2: remover(&agenda); break;
            case 3: listarTodos(agenda.contato, agenda.qtd); break;
            case 4: listarParte(agenda); break;
        }
    }while(escolha != 0);
    return 0;
}