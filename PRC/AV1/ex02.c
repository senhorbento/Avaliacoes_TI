#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[1000],contraria[1000];
    int i;
    /*"frase" armazena a frase a ser analisada,
      "contraria" armazena a frase invertida,
      "i" contador usado no for.*/
    printf("-----Eh palindromo?-----\n\n");
    printf("Por favor digite uma frase de no maximo 1000 caracteres: ");
    fgets(frase,1000,stdin);           
    frase[strlen(frase)-1] = '\0';
    /*Leitura da frase (fgets) a ser analisada e 
      eh retirado o fim de linha da string.*/
    printf("\"%s\"", frase);
    //Comando para mostra a frase sem as futuras alteracoes.
    for(i=0; i<strlen(frase); i++)
        frase[i] = tolower(frase[i]);
    //Comando para colocar todas as letras da frase em minusculo.
    strcpy(contraria, frase);
    strrev(contraria);
    /*Comando para copiar o conteudo da frase para a variavel "contraria"(strcpy)
      e comando para retornar a frase invertida(strrev) na variavel "contraria".*/
    if(strcmp(frase, contraria)==0)
        printf(" eh palindrome\n");
    else 
        printf(" nao eh palindrome\n");
    /*Comparação entre a frase digitada e a frase invertida, 
      se forem iguais eh mostrado que eh palidrome logo apos a frase sem alteracoes
      caso contrario eh mostrado que nao eh palindrome.*/
    return 0;
}
