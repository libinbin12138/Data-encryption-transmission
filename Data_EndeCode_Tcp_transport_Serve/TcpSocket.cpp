#include "TcpSocket.h"


TcpSocket::TcpSocket()
{
	m_sockfd = socket(AF_INET, SOCK_STREAM, 0); //创建套接字

}
TcpSocket::TcpSocket(int fd)
{
	m_sockfd = fd;
}
int TcpSocket::ConnectToHost(const char* ip, unsigned short port)//客户端连接服务器
{
	struct sockaddr_in saddr;
	saddr.sin_family = AF_INET;
	inet_pton(AF_INET, ip, &saddr.sin_addr.s_addr);
	saddr.sin_port = htons(port);

	int len = sizeof(saddr);

	int ret= connect(m_sockfd, (struct sockaddr*)&saddr, len);
	if (ret == -1)
	{
		perror("连接服务器失败");
	}
}
string TcpSocket::RecvData()
{
	char buf[1024] = { 0};
	int size = sizeof(buf)/sizeof(buf[0]);
	int len=recv(m_sockfd, buf, size, 0);
	if (len < 0)
	{
		cout << "接收完成或失败，已断开和服务器的连接" << endl;
	}
	return string(buf);
}
int TcpSocket::SendData(string sendMsg)
{
	const char* data = sendMsg.c_str();
	int datadlen = strlen(data);
	int leng=send(m_sockfd, data, datadlen, 0);
	if (leng < 0)
	{
		cout << "发送失败" << endl;
	}
	return leng;
}
int TcpSocket::SendData(const char*sendData)
{
	int datadlen = strlen(sendData)+1;
	int leng = send(m_sockfd, sendData, datadlen, 0);
	if (leng < 0)
	{
		cout << "发送失败" << endl;
	}
	return leng;
}
int TcpSocket::DisConnect()
{
	
}
TcpSocket::~TcpSocket()
{
	close(m_sockfd);
}