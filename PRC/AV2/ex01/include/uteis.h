#ifndef _UTEIS_H_
#define _UTEIS_H_

#define _MAX_NOME_ 30
#define _MAX_EMAIL_ 100
#define _MAX_TELEFONE_ 20

typedef struct{
    char nome[_MAX_NOME_], email[_MAX_EMAIL_], telefone[_MAX_TELEFONE_];
}TContato;

typedef struct{
    TContato contato[100];
	int qtd;
}TAgenda;

void limparTela();
void limparBuffer();
void pausar();
void lerString(char string[], int tamanho);

#endif