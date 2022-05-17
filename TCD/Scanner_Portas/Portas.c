#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <fcntl.h> // for open
#include <unistd.h> // for close

#define _MAX_PORTA_ 65536

struct sockaddr_in destino;

int main(){
    int e_socket;
    int conexao;

    for(int i=0;i<_MAX_PORTA_;i++){
        e_socket = socket(AF_INET,SOCK_STREAM,0);
        printf("Testando porta %d\n", i);
        destino.sin_family = AF_INET;
        destino.sin_port = htons(i);
        destino.sin_addr.s_addr = inet_addr("127.0.0.1");
        bzero(&(destino.sin_zero),8);
        conexao = connect(e_socket,(struct sockaddr *)&destino,sizeof(destino));
        if(conexao == 0){
            FILE *arq;
            arq = fopen("resultado.txt", "at");
            if (arq!=NULL){
                fprintf(arq,"PORTA ABERTA : %d\n", i);
            }
            fclose(arq);
        }
    }
    printf("Fim do programa!\n");
    close(e_socket);
    return 0;
}