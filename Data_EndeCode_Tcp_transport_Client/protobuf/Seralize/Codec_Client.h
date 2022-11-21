#pragma once
#include"Codec.h"
#include"Client.pb.h"
using namespace Client_Proto;
struct client_Info
{
	int CmdType ;
	string ClientId ;
	string ServeId;
	string Data ;
	string sign ;
};
class Codec_Client:public Codec
{
public:
	Codec_Client();
	Codec_Client(client_Info* client_info);
	Codec_Client(string in);
	void initMessage(client_Info * client_info);
	void initMessage(string in);
	string encodeMsg();
	void* decodeMsg();
	~Codec_Client();
private:
	string m_str;
	ClientInfo  cl_info;
};

