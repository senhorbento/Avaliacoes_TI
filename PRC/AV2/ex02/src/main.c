#include <stdio.h>

#include "uteis.h"
#include "operacoes.h"
#include "menus.h"
#include "arquivo.h"

int main(){
    TLoja brinquedos;
    int escolha;
    brinquedos.qtdLoja=0;
    lerArquivo("brinquedos.txt", &brinquedos);
    do{
        limparTela();
        do{
            menu();
            scanf("%d", &escolha);
            if(escolha < 0 || escolha > 6){
                limparTela();
                printf("Valor incorreto favor informar um numero entre \"0\" e \"4\"\n\n");
            }
        }while(escolha < 0 || escolha > 6);
        limparTela();
        switch (escolha)
        {
            case 0: break;
            case 1: inserir(&brinquedos); break;
            case 2: remover(&brinquedos); break;
            case 3: substituir(&brinquedos); break;
            case 4: listarTodos(brinquedos); break;
            case 5: listarCategoria(brinquedos); break;
            case 6: listarParte(brinquedos); break;
        }
    }while(escolha != 0);
    return 0;
}