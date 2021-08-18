#include <stdio.h>
#include <string.h>

#include "uteis.h"
#include "finds.h"
#include "menus.h"
#include "arquivo.h"
#include "substituicao.h"

void lerBrinquedo(TBrinquedo *b){
    printf("Digite o codigo do brinquedo:\n");
    scanf("%d", &(*b).codigo);
    printf("Digite a quantidade do brinquedo:\n");
    scanf("%d", &(*b).quantidade);
    printf("Digite a categoria do brinquedo:\n");
    lerString((*b).categoria, _MAX_CATEGORIA_);
    printf("Digite o nome do brinquedo:\n");
    lerString((*b).nome, _MAX_NOME_);
    printf("Digite o preco do brinquedo:\n");
    scanf("%lf", &(*b).preco);
    limparTela(); 
}

void inserir(TLoja *l){
    lerBrinquedo(&(*l).total[(*l).qtdLoja]);
    gravarArquivo("brinquedos.txt", *l);
    (*l).qtdLoja++;
    printf("Brinquedo inserido com sucesso!\n");    
    pausar();
}

void remover(TLoja *l){
    int procura,auxiliar;
    procura=findCodigo(*l);
    if(procura>=0){
        printf("Insira a quantidade a ser removida: ");
        scanf("%d", &auxiliar);
        if(auxiliar > 0)
            if(auxiliar <= (*l).total[procura].quantidade){
                (*l).total[procura].quantidade -= auxiliar;
                salvarModificacao("brinquedos.txt", *l);
                printf("Quantidade removida com sucesso!\n");
            }
            else
                printf("Quantidade a ser removida maior que a encontrada!\n");
        if(auxiliar == 0 || (*l).total[procura].quantidade == 0){
            (*l).total[procura]=(*l).total[(*l).qtdLoja-1];
            (*l).qtdLoja--;
            limparTela();
            salvarModificacao("brinquedos.txt", *l);
            printf("Brinquedo removido com sucesso!\n");
        }
        pausar();
    }
    else{
        limparTela();
        printf("Brinquedo nao encontrado!\n");
        pausar();
    }
}

void substituir(TLoja *l){
    int selecao,posicao;
    limparTela();
    posicao=findCodigo(*l);
    if (posicao < 0)
        printf("Nao foi possivel encontrar um brinquedo com esse codigo!\n");
    else
        do{
            limparTela();
            do{
                submenu1();
                scanf("%d", &selecao);
                if(selecao < 0 || selecao > 5){
                    limparTela();
                    printf("Valor incorreto favor informar um numero entre \"0\" e \"5\"\n\n");
                }
                limparTela();
                switch (selecao)
                {
                    case 0: break;
                    case 1: substituirCodigo(&*l, posicao);break;
                    case 2: substituirQuantidade(&*l, posicao);break;
                    case 3: substituirCategoria(&*l, posicao);break;
                    case 4: substituirNome(&*l, posicao);break;
                    case 5: substituirPreco(&*l, posicao);break;
                }
            }while (selecao < 0 || selecao > 5);
            
        }while(selecao !=0);
}

void listarTodos(TLoja n){
    int i;
    for(i=0;i<n.qtdLoja;i++)
        printf("%d %d %s %s %.2lf\n", n.total[i].codigo, n.total[i].quantidade, n.total[i].categoria, n.total[i].nome, n.total[i].preco);
    pausar();
}

void listarCategoria(TLoja l){
    char comparar[_MAX_CATEGORIA_];
    int i,qtd=0;
    printf("Favor digite a categoria a ser filtrada: ");
    lerString(comparar,_MAX_CATEGORIA_);
    limparTela();
    for(i=0;i<l.qtdLoja;i++)
        if(strcmp(l.total[i].categoria, comparar)==0){
            printf("%d %d %s %s %lf\n", l.total[i].codigo, l.total[i].quantidade, l.total[i].categoria, l.total[i].nome, l.total[i].preco);
            qtd++;
        }
    if(qtd==0)
        printf("Nao foi possivel encontrar nenhuma categoria com esse filtro\n");
    pausar();
}

void listarParte(TLoja l){
    int selecao;
    do{
        limparTela();
        do{
            submenu2();
            scanf("%d", &selecao);
            if(selecao < 0 || selecao > 2){
                limparTela();
                printf("Valor incorreto favor informar um numero entre \"0\" e \"3\"\n\n");
            }
        }while(selecao < 0 || selecao > 2);
        limparTela();
        switch (selecao)
        {
            case 0: break;
            case 1: findParteNome(l); break;
            case 2: findParteCategoria(l); break;
        }
    }while(selecao != 0);
}