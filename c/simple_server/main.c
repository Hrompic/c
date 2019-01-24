#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#define PORT 7890
#include "hacking.h"
#include <errno.h>
#include <unistd.h>
typedef struct sockaddr_in a;
void fatal(char * err)
{
    printf( "err by %s%d",err,errno);
    perror("ERROR:");
}


int main()
{
    int sockfd, new_sockfd;
    a host_addr, client_addr;
    socklen_t sin_size;
    int recv_lenth=1, yes=1;
    char bufer[1024], buff[1030];
    if((sockfd = socket(PF_INET,SOCK_STREAM,0)) == -1)
        fatal("in socket");
    printf("%d\n",sockfd);
    if(setsockopt(sockfd,SOL_SOCKET,SO_REUSEADDR,&yes,sizeof(int)) == -1)
        fatal("setting socket option SO_REUSEADDR");
    host_addr.sin_family = AF_INET;
    host_addr.sin_addr.s_addr = INADDR_ANY;
    host_addr.sin_port = htons(PORT);
    memset(&host_addr.sin_zero,'/0',8);
    if(bind(sockfd,(struct sockaddr *) &host_addr,sizeof(struct sockaddr)) == -1)
        fatal("binding to socket");
    if(listen(sockfd,8) == -1)
        fatal("listerning on socket");
    while(1)
    {
        sin_size = sizeof(struct sockaddr_in);
        new_sockfd = accept(sockfd,(struct sockaddr*) &client_addr,&sin_size);
        if(new_sockfd == -1)
            fatal("accepting connection");
        printf("Server got connection from %s port %d\n",inet_ntoa(client_addr.sin_addr),ntohs(client_addr.sin_port));
        send(new_sockfd,"Hello on my server",16,0);
        recv_lenth = recv(new_sockfd,bufer,1024,0);

        while(recv_lenth > 0)
        {
            printf("Recv: %d bytes\n",recv_lenth);
            dump(bufer,recv_lenth);
            recv_lenth = recv(new_sockfd,bufer,1024,0);
			sprintf(buff,"Echo: %s",bufer);
			send(new_sockfd,buff,1030,0);
        }
        close(new_sockfd);
    }



    return 0;
}
