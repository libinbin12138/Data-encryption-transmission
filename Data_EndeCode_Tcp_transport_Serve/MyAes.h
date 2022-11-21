#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<openssl/aes.h>
#include<string.h>
# define AES_BLOCK_SIZE 16
# define AES_ENCRYPT     1   //-> º”√‹
# define AES_DECRYPT     0   //->Ω‚√‹
class MyAes
{
public:
	MyAes();
	MyAes(const char *usr_key, int bits);
	~MyAes();
	char* Aes_decode(const char *in);
	char* Aes_Encode(const char* in);

private:
	int bits;
	char* userkey;
	char ivec[AES_BLOCK_SIZE];
	AES_KEY de_key;
	AES_KEY en_key;
	
};

