#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[1000];
    int i;
    printf("------Organinzando uma frase-----\n\n");
    printf("Por favor digite uma frase de no maximo 1000 caracteres: ");
    fgets(frase,1000,stdin);           
    frase[strlen(frase)-1] = '\0';
    for(i=0; i<strlen(frase); i++)
        if(isalpha(frase[i])){
            frase[i]=toupper(frase[i]);
            i++;
            while (isalpha(frase[i])){
                frase[i]=tolower(frase[i]);
                i++;
            }
        }
    printf("Frase organizada:\n");
    printf("%s\n", frase);
    return 0;
}
