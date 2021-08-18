#ifndef _UTEIS_H_
#define _UTEIS_H_

#define _MAX_CATEGORIA_ 20
#define _MAX_NOME_ 30

typedef struct{
    int codigo, quantidade;
	char categoria[_MAX_CATEGORIA_], nome[_MAX_NOME_];
	double preco;
}TBrinquedo;

typedef struct{
    TBrinquedo total[100];
	int qtdLoja;
}TLoja;

void limparTela();
void limparBuffer();
void pausar();
void lerString(char string[], int tamanho);

#endif