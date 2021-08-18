#include <stdio.h>

void menu(){
    printf("0 - Sair\n");
    printf("1 - Inserir brinquedo\n");
    printf("2 - Remover brinquedo dado o codigo e a qtd\n");
    printf("3 - Substituir dados do brinquedo\n");
    printf("4 - Listar todos\n");
    printf("5 - Listar todos de uma categoria\n");
    printf("6 - Listar filtrando por parte do nome ou categoria\n\n");
    printf("Qual funcao deseja acessar? ");
}

void submenu1(){
    printf("0 - Voltar\n");
    printf("1 - Substituir codigo\n");
    printf("2 - Substituir quantidade\n");
    printf("3 - Substituir categoria\n");
    printf("4 - Substituir nome\n");
    printf("5 - Substituir preco\n\n");
    printf("Qual parte deseja substituir? ");
}

void submenu2(){
    printf("0 - Voltar\n");
    printf("1 - Listar os brinquedos dado parte do nome\n");
    printf("2 - Listar os brinquedos dado parte da categoria\n\n");
    printf("Qual funcao deseja acessar? ");
}