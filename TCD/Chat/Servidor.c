#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/wait.h>

#define PORTA 20032
#define ERRO -1
#define TAMMAX 250     //tamanho maximo da string

int main (){
  struct sockaddr_in network, local;
  int sock,newSock,resp,strucsize;
  char msgbuffer [TAMMAX];

  sock = socket (AF_INET, SOCK_STREAM, 0);
  
  if (sock == ERRO){
    perror ("Socket");
    exit (0);
  }

  bzero ((char *)&local, sizeof (local));
  local.sin_family = AF_INET;
  local.sin_port = htons (PORTA);
  local.sin_addr.s_addr = INADDR_ANY;

  strucsize = sizeof (local);

  resp = bind (sock, (struct sockaddr *)&local, strucsize);

  if (resp == ERRO){
      perror ("Bind");
      exit (0);
  }

  listen (sock, 5);

  newSock = accept (sock, (struct sockaddr *)&network, &strucsize);

  if (newSock == ERRO){
    perror ("Accept");
    exit (0);
  }

  fprintf (stdout, "Recebendo conexao de: %s\n", inet_ntoa (network.sin_addr));

  while(1){
    recv (newSock, msgbuffer, TAMMAX, 0);
    fprintf (stdout, "\nMensagem Recebida: %s\n", msgbuffer);
    msgbuffer[strlen(msgbuffer)-1]='\0';
    if (strcmp(msgbuffer, "exit")==0)
      return 0;
  }
  return 0;
}
