#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include"Hash_Base.h"
#include<openssl/md5.h>
#include<string.h>
#include<stdio.h>
#include<iostream>

class Hash_Md5:
	public Hash_Base
{
public:
	Hash_Md5();
	~Hash_Md5();
	 void create_Final(const void* data);
	void* get_Final();
private:
	MD5_CTX* c;
	unsigned char* value;
	char* final_value;
};

