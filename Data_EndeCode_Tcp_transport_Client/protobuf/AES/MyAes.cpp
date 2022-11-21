#include "MyAes.h"
MyAes::MyAes()
{
	this->bits = 128;
	this->userkey = new char[64];
	memset(userkey, 0, 64);
	strcpy(userkey, "1234567887654321");
	
}
MyAes::MyAes(const char* usr_key,int bits)
{
	this->bits = bits;
	this->userkey = new char[bits/8*4];
	strcpy(userkey, usr_key);

}
MyAes::~MyAes()
{

}
char* MyAes::Aes_decode(const char* in)
{
	AES_set_decrypt_key((const unsigned char*)userkey, bits, &de_key);

	int len = strlen(in) + 1;
	int length = 0;
	if (len % 16 == 0)
	{
		length = len;
	}
	else
	{
		length = (len / 16 + 1) * 16;
	}

	char *out = new char[length];
	memset(ivec, 0, sizeof(ivec));

	AES_cbc_encrypt((const unsigned char*)in, (unsigned char*)out, length, &de_key, (unsigned char*)ivec, AES_DECRYPT);
	return out;
}
char* MyAes::Aes_Encode(const char* in)
{
	AES_set_encrypt_key((const unsigned char* )userkey,  bits, &en_key);

	int len = strlen(in)+1;
	int length = 0;
	if (len % 16 == 0)
	{
		length = len;
	}
	else
	{
		length = (len / 16 + 1) * 16;
	}

	char* out = new char[length];
	memset(ivec, 0, sizeof(ivec));

	AES_cbc_encrypt((const unsigned char*) in, (unsigned char*) out,length, & en_key,(unsigned char*) ivec, AES_ENCRYPT);
	return out;
}