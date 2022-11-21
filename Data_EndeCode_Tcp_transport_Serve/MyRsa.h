#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<openssl/rsa.h>
#include<openssl/bio.h>
#include<iostream>
# include <stdio.h>
# include <string.h>
#include<string>
class MyRsa
{
public:
	MyRsa();
	MyRsa(int num);
	~MyRsa();

	void Create();
	void Create(int num);
	void Write_Pub();
	void Write_Pri();
	void *Read_Pub();
	void *Read_Pri();
	char* Get_encrypt_Value(const char* p);
	char* Get_decrypt_Value(char* buf);

private:
	RSA* rsa;
	BIGNUM* e;
	RSA* rpub;
	RSA* rpri;
};

