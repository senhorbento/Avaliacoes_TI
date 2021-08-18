#include <stdio.h>

int main(){
    int a,u,z=1;
    double multiplicador,total;
    printf("----------Cardapio----------\n1 - Misto Quente    R$ 4.50\n2 - Queijo Quente   R$ 4.00\n3 - Hamburguer      R$ 6.00\n4 - Eggburguer      R$ 7.00\n5 - Podrao          R$ 9.00\n0 - Sair\n\n");
        while(z==1){
            printf("Qual o seu pedido? ");
            scanf("%d", &a);
            switch (a)
            {
                case 0:
                    z=0; 
                    printf("Aproveite o lanche =)\n"); 
                    break;
                case 1:
                    multiplicador=4.5;  
                    break;
                case 2:
                    multiplicador=4.0;
                    break;
                case 3:
                    multiplicador=6.0;  
                    break;
                case 4:
                    multiplicador=7.0;  
                    break;
                case 5:
                    multiplicador=9.0;
                    break;
                default:
                    printf("\nTermo INCORRETO, por favor digite um numero inteiro entre 0 e 5.\n");
                    break;
            }
            if(a>0 && a<6){
                printf("Quantas unidades? ");
                scanf("%d", &u);
                total=multiplicador*u;
                printf("Total do pedido = R$%.2lf\n\n", total);
            }
        }
    return 0;
}
