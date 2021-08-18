#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "uteis.h"

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

void lerString(char string[], int max){
    int len;
    limparBuffer();
    fgets(string, max , stdin);
    len=strlen(string);
    string[len-1]='\0';
}