#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <sys/errno.h>
#include <stdio.h>
#include <iostream>

int main(){
  //Variables  
   int sockfd = socket(AF_INET, SOCK_STREAM, 0);
   struct sockaddr_in server;
   struct hostent *server_host;

  // Estructura de datos
   bzero(&server, sizeof(server));
   server.sin_family = AF_INET;
   bcopy(server_host -> h_addr , &server.sin_addr , server_host -> h_length);
   server.sin_port = htons((short) SERVER_PORT);
   if ( sockfd < 0 ) {
       std::cout<<"Error sock"<<std::endl;
   }
  

}
