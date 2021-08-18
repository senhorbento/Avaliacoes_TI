#ifndef _UTEIS_H_
#define _UTEIS_H_

#define _max_termos_ 200

typedef struct{
    double conjunto[_max_termos_];
    int qtd;
}TConjunto;

int comparadorQsort(const void *a, const void *b);
int checarElemento(TConjunto n, double duvidoso);
int checarNoConjunto(TConjunto n, int qtd);
void limparTela();
void pausar();

#endif