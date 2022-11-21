#include "Codec_Client.h"
Codec_Client::Codec_Client()
{

}
Codec_Client::Codec_Client(string in)
{
	this->initMessage(in);
}
Codec_Client::Codec_Client(client_Info* client_info)
{
	this->initMessage(client_info);
}

void Codec_Client::initMessage(client_Info* client_info)
{
	cl_info.set_cmdtype(client_info->CmdType);
	cl_info.set_clientid(client_info->ClientId);
	cl_info.set_serveid(client_info->ServeId);
	cl_info.set_data(client_info->Data);
	cl_info.set_sign(client_info->sign);
}
void Codec_Client::initMessage(string in)
{
	this->m_str = in;
}
string Codec_Client::encodeMsg()
{
	string output;
	cl_info.SerializeToString(&output);
	return output;
}
 void* Codec_Client::decodeMsg()
{
	 cl_info.ParseFromString(m_str);
	 return &cl_info;
}
 Codec_Client::~Codec_Client()
{

}