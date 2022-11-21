#pragma once
#include"protobuf/Seralize//Codec_Client.h"
#include<json/json.h>
#include<fstream>
#include"protobuf/RSA/MyRsa.h"
#include"protobuf/Hash/Hash_myUsed.h"
#include"Tcp_Socket/TcpSocket.h"
const int Height = 20;
const int  Width= 40;

class Client_Tcp
{
public:
	Client_Tcp();
	Client_Tcp(const char* ip, unsigned short port);
	~Client_Tcp();
	void init_connect();
	void init_seralize();
	void ShowMenu();
	string key_Agreement(int e_num,int flags);

private:
	TcpSocket cl_tcp;//连接服务器通信
	
	client_Info cl_info;//初始化序列化用结构体
	Codec_Client cl_codec;//序列化

	MyRsa *cl_rsa;//不对称加密
	Hash_myUsed *cl_hash;//哈希运算

	
};

