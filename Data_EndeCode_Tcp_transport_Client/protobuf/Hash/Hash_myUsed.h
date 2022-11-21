#pragma once
#include"Hash_1.h"
#include"Hash_224.h"
#include"Hash_Md5.h"
#include"Hash_Base.h"

enum HashType { M_MD5, M_SHA1, M_SHA224 };
class Hash_myUsed
{
public:
	
	//enum HashType { M_MD5, M_SHA1, M_SHA224 };
	Hash_myUsed();
	Hash_myUsed(int flags,void *data);
	Hash_myUsed(HashType type, void* data);
	void* HashUsed_value();
	~Hash_myUsed();

private:
	Hash_Base* hash;
	void* final_value;
};

