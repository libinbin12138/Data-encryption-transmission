#pragma once
#include<iostream>
#include<string>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
class TcpSocket
{
public:
	TcpSocket();
	TcpSocket(int fd);
	int ConnectToHost(const char* ip, unsigned short port);//链接服务器
	string RecvData();//接收
	int SendData(string sendMsg);//发送
	int SendData(const char* sendData);//发送
	int DisConnect();//断开链接
	~TcpSocket();
private:
	int m_sockfd;
};

