#pragma once
#include<arpa/inet.h>
#include <stdio.h>
#include<sys/epoll.h>
#include<pthread.h>

//#include<stdlib.h>
class Serve_Tcp
{
public:
	Serve_Tcp();
	Serve_Tcp(unsigned short port);
	~Serve_Tcp();
	int lfd_init();
	int epoll_run();
	int acceptConnect();
	//void* recvRequest(void* arg);
private:
	int lfd;
	unsigned short port;
};

