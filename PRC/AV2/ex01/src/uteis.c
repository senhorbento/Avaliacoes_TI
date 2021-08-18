#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limparTela(){
    system("clear || cls");
}

void limparBuffer(){
    setbuf(stdin,NULL);
}

void pausar(){
    printf("\n");
    system("pause || (echo Pressione qualquer tecla... && read-n1)");
}

void lerString(char string[], int tamanho){
    int len;
    limparBuffer();
    fgets(string, tamanho , stdin);
    len=strlen(string);
    string[len-1]='\0';
}