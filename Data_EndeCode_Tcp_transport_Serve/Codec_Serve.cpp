#include "Codec_Serve.h"
Codec_Serve::Codec_Serve()
{

}
Codec_Serve::Codec_Serve(serve_Info* serve_Info)
{
	this->initMessage(serve_Info);
}
Codec_Serve::Codec_Serve(string in)
{
	this->initMessage(in);
}
void Codec_Serve::initMessage(serve_Info* serve_Info)
{
	ser_info.set_status(serve_Info->status);
	ser_info.set_serveid(serve_Info ->ServeId);
	ser_info.set_clientid(serve_Info ->ClientId);
	ser_info.set_data(serve_Info ->Data);
	ser_info.set_seckeyid(serve_Info->seckyID);
}

void Codec_Serve::initMessage(string in)
{
	this->m_str = in;
}
string Codec_Serve::encodeMsg()
{
	string out;
	ser_info.SerializeToString(&out); 
	return out;
}
void* Codec_Serve::decodeMsg()
{
	ser_info.ParseFromString(m_str);
	return &ser_info;
}
Codec_Serve::~Codec_Serve()
{

}