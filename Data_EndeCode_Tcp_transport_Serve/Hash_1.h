#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include"Hash_Base.h"
#include<openssl/sha.h>
#include<string.h>
#include<stdio.h>
class Hash_1 :
    public Hash_Base
{
public:
    Hash_1();
   ~Hash_1();
   void create_Final(const void* data);
   void* get_Final();
private:
	SHA_CTX* c;
	unsigned char* value;
	char* final_value;
};

