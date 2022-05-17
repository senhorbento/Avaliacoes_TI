#include <stdio.h>
#include <pthread.h>

int vetor[] = {1,2,3,4,5,6};
int soma1 = 0, soma2 = 0;

#define NUMTHRDS 2
pthread_t t [NUMTHRDS];
int coin_flip;
pthread_mutex_t flip_done;

static void *thread1(void *_){
    for(int i = 0; i < 3; i++){
        soma1 += vetor[i];
    }
}

static void *thread2(void *_){
    for(int i = 3; i < 6; i++){
        soma2 += vetor[i];
    }
}

int main(){
	pthread_create(&t[0], NULL, thread2, NULL);
	pthread_create(&t[1], NULL, thread1, NULL);
    pthread_exit(NULL);
    printf("Resultado: %d\n", soma1+soma2);	
    
    return 0;
}