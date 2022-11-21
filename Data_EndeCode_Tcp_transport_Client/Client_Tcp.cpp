#include "Client_Tcp.h"
using namespace Json;
Client_Tcp::Client_Tcp()
{}
Client_Tcp::Client_Tcp(const char* ip, unsigned short port)
{
	cl_tcp.ConnectToHost(ip, port);//连接服务器

	init_seralize();//初始化序列化
}
Client_Tcp::~Client_Tcp()
{

}
void Client_Tcp::init_connect()
{
	
}
void Client_Tcp::init_seralize()
{
	//读配置文件
	Value v;
	Reader rd;
	ifstream ifs("Client.json");
	rd.parse(ifs, v);

	//初始化 序列化  所传入的结构体的信息
	cl_info.CmdType = 0;
	cl_info.ServeId = v["ServeId"].asString();
	cl_info.ClientId = v["ClientId"].asString();
	cl_info.Data = {0};
	cl_info.sign = {0};
	//初始化序列化的信息
   cl_codec.initMessage(&cl_info);
}
void Client_Tcp::ShowMenu()
{
	for (int i = 0; i < Height; i++)
	{
		for (int j = 0; j < Width; j++)
		{
			if (i == 0||i==Height-1)
			{
				cout << "-";
			}
			else if ((j == 0 && (i != 0 || i != Height - 1)) || (j == Width - 1 && (i != 0 || i != Height - 1)))
			{
				cout << "|";
			}

			else if(i==5&&j==10)
			{
				cout << "1.密钥协商";
			}
			else if (i == 8 && j == 10)
			{
				cout << "2.密钥校验";
			}
			else if (i == 11 && j == 10)
			{
				cout << "3.密钥销毁";
			}

			else if ((i == 5 || i == 8 ||i==11)&& (j > 10 && j < 20))
			{
				continue;
			}

			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

string Client_Tcp::key_Agreement(int e_num,int flags)
{
	cl_info.CmdType = 1;//选择是1;密钥协商

	//获取不对称加密的公钥
	cl_rsa=new MyRsa(e_num);
	RSA* rsa_send = RSA_new();
	rsa_send=(RSA*)cl_rsa->Read_Pub();

	//获取公钥的哈希值以方便简单校验数据。
	cl_hash = new Hash_myUsed(flags, rsa_send);//哈希运算
	int keylen = RSA_size(rsa_send);
	char* pubkeyHashValue = new char[keylen];
	memset(pubkeyHashValue, 0, keylen);
	memcpy(pubkeyHashValue,cl_hash->HashUsed_value(), keylen);
	
	cl_info.Data= (char *)rsa_send;
	cl_info.sign = pubkeyHashValue;

	cl_codec.initMessage(&cl_info);//再次初始化
	string sendData=cl_codec.encodeMsg();//加密
	//发送序列化后的数据
	cl_tcp.SendData(sendData);
	cout << "正在给服务器发送公钥" << endl;
	usleep(500);
	cout << "发送完成" << endl;

	usleep(500);
	//接受服务器传回的数据
	cout << "正在接收服务器发送的对称公钥" << endl;
	string recvdata=cl_tcp.RecvData();
	if(recvdata.size() == 0)
	{
		return NULL;
	}
	cout << "请选择要进行的下一步操作：" << endl;
	this->ShowMenu();
	return recvdata;
}