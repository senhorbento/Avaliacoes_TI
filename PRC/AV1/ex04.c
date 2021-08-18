#include <stdio.h>

int main(){
    int linha1,linha2,coluna1,coluna2,i,j;
    double matriz1[100][100],matriz2[100][100];
    printf("-----Soma de Matrizes-----\n\n");
    printf("Qual o numero de linhas da primeira matriz? ");
    scanf("%d", &linha1);
    printf("Qual o numero de colunas da primeira matriz? ");
    scanf("%d", &coluna1);
    printf("\nQual o numero de linhas da segunda matriz? ");
    scanf("%d", &linha2);
    printf("Qual o numero de colunas da segunda matriz? ");
    scanf("%d", &coluna2);
    printf("\n-----Preencha a primeira matriz-----\n\n");
    for(i=0;i<linha1;i++)
        for(j=0;j<coluna1;j++){
            printf("Insira o valor da primeira matriz na linha %d e coluna %d: ", i+1,j+1);
            scanf("%lf", &matriz1[i][j]);
        }
    printf("\n-----Preencha a segunda matriz-----\n\n");
    for(i=0;i<linha2;i++)
        for(j=0;j<coluna2;j++){
            printf("Insira o valor da segunda matriz na linha %d e coluna %d: ", i+1,j+1);
            scanf("%lf", &matriz2[i][j]);
        }
    if(linha1 != linha2 && coluna1 != coluna2)
        printf("\nMatrizes incompativeis para a soma!\n");
    else{
        printf("\nA matriz resultante eh:\n");
        for(i=0;i<linha2;i++)
            for(j=0;j<coluna2;j++){
                printf("%.4lf ", matriz1[i][j]+matriz2[i][j]);
                if(j==coluna2-1)
                    printf("\n");
            } 
    }   
    return 0;
}
