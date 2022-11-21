#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include"Hash_Base.h"
#include<openssl/sha.h>
#include<string.h>
#include<stdio.h>
#include<iostream>
class Hash_224:public Hash_Base
{
public:
	Hash_224();
	~Hash_224(); 
	 void create_Final(const void* data);
	 void* get_Final();
private:
	SHA256_CTX *c;
	unsigned char* value;
	char* final_value;
};

