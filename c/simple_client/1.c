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

int main()
{
	char bufer[1030];
	int sock = socket(PF_INET,SOCK_STREAM,0);
	struct sockaddr_in addr;
	addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = INADDR_ANY;
    addr.sin_port = htons(PORT);
    memset(&addr.sin_zero,'/0',8);
	addr.
}