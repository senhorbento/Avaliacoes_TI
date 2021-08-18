#include <stdio.h>

void menu(){
    printf("0 - Sair\n");
    printf("1 - Inserir um contato\n");
    printf("2 - Remover um contato dado o email\n");
    printf("3 - Listar todos os contatos\n");
    printf("4 - Listar os contatos dado parte do nome, email ou telefone\n\n");
    printf("Qual funcao deseja acessar? ");
}

void submenu(){
    printf("0 - Voltar\n");
    printf("1 - Listar os contatos dado parte do nome\n");
    printf("2 - Listar os contatos dado parte do email\n");
    printf("3 - Listar os contatos dado parte do telefone\n\n");
    printf("Qual funcao deseja acessar? ");
}