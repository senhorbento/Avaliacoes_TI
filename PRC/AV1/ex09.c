#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {
   return ( *(double*)b - *(double*)a);
}

int main(){
    int i,aux;
    double n[100],media=0,divisor=0;
    printf("---Media dos valores sem os valores extremos---\n\n");
    for(i=0;i<100;i++){
        printf("Digite o %d numero real (0 finaliza o armazenamento): ", i+1);
        scanf("%lf", &n[i]);
        if(n[i]==0 || i==99){
            aux=i;
            i=100;
        }
    }
    qsort(n, aux, sizeof(double), comparar);
    for(i=0;i<aux;i++)
        if(n[i]!=n[0]&&n[i]!=n[aux-1]){
            media+=n[i];
            divisor++;
        }
    media = media/divisor;
    printf("A media calculada foi: %.1lf\n", media);

    return 0;
}
