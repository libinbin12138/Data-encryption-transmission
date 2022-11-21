#include "Hash_Md5.h"
Hash_Md5::Hash_Md5()
{
	c = new MD5_CTX;
	if (c == NULL)
	{
		std::cout << "MD_CTX err"<<std::endl;
	}
	value = new unsigned char[16];
	final_value = new char[33];
	MD5_Init(c);
}
Hash_Md5::~Hash_Md5()
{
	if (c != NULL)
	{
		delete c;
		c = NULL;
	}
	if(value != NULL)
	{
		delete []value;
		value = NULL;
	}
	if(final_value != NULL)
	{
		delete []final_value;
		final_value = NULL;
	}
}
void Hash_Md5::create_Final(const void* data)
{
	MD5_Update(c, data, strlen((const char *)data));
	MD5_Final(value, c);
	for (int i = 0; i < 16; ++i)
	{
		sprintf(&final_value[i * 2], "%02x", value[i]);
	}
}
void* Hash_Md5::get_Final()
{
	return final_value;
}