#include <stdio.h>

int main(){
    int a,b,c,d,i;
    /*"a" primeiro valor que o usuario vai inserir,
      "b" segundo valor que o usuario vai inserir,
      "c" contador da soma dos divisores do primeiro numero,
      "d" contador da soma dos divisores do segundo numero,
      "i" contador usado no for.*/
    c=0;
    d=0;
    //Zeragem dos contadores da soma dos divisores.
    printf("-----Estes numeros sao amigos?-----\n");
    do{
        printf("\nDigite o primeiro numero inteiro positivo: ");
        scanf("%d", &a);
        if(a<0) 
            printf("\nTermo INCORRETO, por favor digite um numero inteiro positivo.\n");
    }while(a<0);
    do{
        printf("\nDigite o segundo numero inteiro positivo: ");
        scanf("%d", &b);
        if(b<0) 
            printf("\nTermo INCORRETO, por favor digite um numero inteiro positivo.\n");
    }while(b<0);
    //Repeticoes para as leituras dos valores, para que em caso dos valores serem invalidos, novas leituras serao realizadas.
    for (i=1;i<a;i++)
        if (a%i==0)
            c+=i;
    for (i=1;i<b;i++)
        if (b%i==0)
            d+=i;
    //Repeticoes para a soma dos divisores de ambos os valores lidos.
    if(a==d && b==c)
        printf("\n%d e %d sao amigos =)\n\n", a,b);
    else
        printf("\n%d e %d NAO sao amigos =(\n\n", a,b);
    /*Se a soma dos divisores do primeiro numero for igual o segundo valor e,
      se a soma dos divisores do segundo numero for igual o primeiro valor,
      eh informado que os valores sao amigos, caso contrario nao sao.*/
    return 0;
}
