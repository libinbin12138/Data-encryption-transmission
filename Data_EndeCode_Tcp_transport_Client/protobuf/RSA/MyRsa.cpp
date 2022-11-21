#include "MyRsa.h"
#include<openssl/pem.h>
using namespace std;
MyRsa::MyRsa()
{
	this->Create();
	this->Write_Pri();
	this->Write_Pub();
}
MyRsa::MyRsa(int num)
{
	this->Create(num);
	this->Write_Pri();
	this->Write_Pub();
}
MyRsa::~MyRsa()
{
	if (rsa)
	{
		RSA_free(rsa);
	}
	if (rpub)
	{
		RSA_free(rpub);
	}
	if (rpri )
	{
		RSA_free(rpri);
	}
	if (e )
	{
		BN_free(e);
	}
}

void MyRsa::Create()
{
	rsa = RSA_new();
	e = BN_new();
	BN_set_word(e, 12345);
	int ret = RSA_generate_key_ex(rsa, 1024, e, NULL);
	rpub = RSAPublicKey_dup(rsa);
	rpri = RSAPrivateKey_dup(rsa);

}
void MyRsa::Create(int num)
{
	rsa = RSA_new();
	e = BN_new();
	BN_set_word(e, num);
	int ret = RSA_generate_key_ex(rsa, 1024, e, NULL);
	rpub = RSAPublicKey_dup(rsa);
	rpri = RSAPrivateKey_dup(rsa);

}
void MyRsa::Write_Pub()
{
	BIO* bio = BIO_new_file("public.pem", "w");
	PEM_write_bio_RSAPublicKey(bio, rsa);
	BIO_free(bio);
}
void MyRsa::Write_Pri()
{
	BIO* bio = BIO_new_file("private.pem", "w");
	PEM_write_bio_RSAPrivateKey(bio, rsa, NULL, NULL, 0, NULL, NULL);
	BIO_free(bio);

}
void * MyRsa::Read_Pub()
{
	BIO* bio = BIO_new_file("public.pem", "r");
	PEM_read_bio_RSAPublicKey(bio, &rpub, NULL, NULL);
	BIO_free(bio);
	return rpub;
}
void * MyRsa::Read_Pri()
{
	BIO* bio = BIO_new_file("private.pem", "r");
	PEM_read_bio_RSAPublicKey(bio, &rpri, NULL, NULL);
	BIO_free(bio);
	return rpri;
}
char* MyRsa::Get_encrypt_Value(const char *p)
{
	int keyLen = RSA_size(rpub);
	char* buf = new char[keyLen];
	memset(buf, 0, keyLen);
	//cout << "strlen(buf)==" << strlen(buf) << endl;
	// 返回值就是密文长度
	int len = RSA_public_encrypt(strlen(p), (const unsigned char*)p,
		(unsigned char*)buf, rpub, RSA_PKCS1_PADDING);
	// 将密文返回
	return buf;
}

char* MyRsa::Get_decrypt_Value(char *buf)
{
	int keyLen2 = RSA_size(rpri);
	char* buf2 = new char[keyLen2];
	memset(buf2, 0, keyLen2);
    // 返回值是解密之后的数据长度 == 原始数据长度
	int len2 = RSA_private_decrypt(keyLen2, (const unsigned char*)buf,
		(unsigned char*)buf2, rpri, RSA_PKCS1_PADDING);
	//cout << "解密之后的数据: " << buf2 << endl;
	return buf2;
}