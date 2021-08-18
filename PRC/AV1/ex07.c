#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[30];
    double nota1,nota2,media;
}Ficha;

void leitura(Ficha aluno[], int quantidade){
    int i;
    for(i=0; i<quantidade; i++){
        printf("\n");
        printf("Nome do aluno numero %d:", i+1);
        fgets(aluno[i].nome,30,stdin);             
        aluno[i].nome[strlen(aluno[i].nome)-1] = '\0';
        printf("Primeira nota de %s: ", aluno[i].nome);
        scanf("%lf", &aluno[i].nota1);
        printf("Segunda nota de %s: ", aluno[i].nome);
        scanf("%lf", &aluno[i].nota2);
        aluno[i].media=(aluno[i].nota1+ (2*aluno[i].nota2))/3;
        setbuf(stdin,NULL);
    }
}

int main(){
    Ficha aluno[100];
    int i,quantidade;
    double mediaturma=0;
    printf("---Quais os aluno com media maior que a media da turma?---\n");
    do{
        printf("\nQuantos alunos? ");
        scanf("%d", &quantidade);
        setbuf(stdin,NULL);
        if(quantidade>100)
            printf("Quantidade invalida, por favor digite outro valor.\n");
    }
    while(quantidade>100);
    leitura(aluno,quantidade);
    for(i=0;i<quantidade;i++)
        mediaturma+=aluno[i].media;
    mediaturma=mediaturma/quantidade;
    printf("\nA media da turma foi: %.2lf\n", mediaturma);
    printf("O(s) aluno(s) com media maior que a media da turma foi(foram):\n");
    printf("\n");
    for(i=0;i<quantidade;i++)
        if (aluno[i].media > mediaturma)
            printf("%s com media: %.2lf\n", aluno[i].nome,aluno[i].media);
}
