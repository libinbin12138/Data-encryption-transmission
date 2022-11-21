#pragma once
#include"Codec.h"
#include"Serve.pb.h"

using namespace Serve_Proto;
struct serve_Info
{
	bool status;
	string ClientId;
	string ServeId;
	string Data;
	int seckyID;
};
class Codec_Serve :public Codec
{
public:
	Codec_Serve();
	Codec_Serve(serve_Info* serve_info);
	Codec_Serve(string in);
	void initMessage(serve_Info* serve_Info);
	void initMessage(string in);
	string encodeMsg();
	void* decodeMsg();
	~Codec_Serve();
private:
	string m_str;
	ServeInfo ser_info;
};

