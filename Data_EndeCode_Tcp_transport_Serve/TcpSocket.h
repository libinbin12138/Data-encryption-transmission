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
	int ConnectToHost(const char* ip, unsigned short port);//���ӷ�����
	string RecvData();//����
	int SendData(string sendMsg);//����
	int SendData(const char* sendData);//����
	int DisConnect();//�Ͽ�����
	~TcpSocket();
private:
	int m_sockfd;
};

