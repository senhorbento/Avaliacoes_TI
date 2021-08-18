#include <stdio.h>

int main(){
    int b,j,c; 
    /*"b" valor que o usuario vai inserir,
      "j" valor usado como contador no for,
      "c" contador de números divisores de b.*/
    c=0;
    //Zeragem do contador de divisores.
    printf("-----Este numero eh primo?-----\n\n");
    do{
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &b);
        if(b<0) 
            printf("\nTermo INCORRETO, por favor digite um numero inteiro positivo.\n");
    }while(b<0);
    //Repeticao para a leitura do valor, para que em caso do valor ser invalido, nova leitura sera realizada.
    if(b==1 || b==0)
        printf("Nao, %d nao eh primo.\n\n", b);
    //Na matematica foi decidido que 0 e 1 não são primos.
    else{
        for(j=1;j<=b;j++)
            if(b%j==0){
                c++;
            }
    /*Repeticao para averiguar quantos sao os divisores de "b", 
      e então é somado ao contador "c".*/
        if(c<3)
            printf("Sim, %d eh primo.\n\n", b);
        else 
            printf("Nao, %d nao eh primo.\n\n", b);
    //Se somente 1 e o proprio "b" forem divisores de "b" eh mostrado que o valor eh primo, caso contrario nao eh.
    }
    return 0;
}
