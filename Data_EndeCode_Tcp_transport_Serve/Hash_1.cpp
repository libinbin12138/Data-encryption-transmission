#include "Hash_1.h"
Hash_1::Hash_1()
{
	c = new SHA_CTX;
	value = new unsigned char[20];
	final_value = new char[41];
	SHA1_Init(c);
}
Hash_1::~Hash_1()
{
	if (c != NULL)
	{
		delete c;
		c = NULL;
	}
	if (value != NULL)
	{
		delete[]value;
		value = NULL;
	}
	if (final_value != NULL)
	{
		delete[]final_value;
		final_value = NULL;
	}
}
void Hash_1::create_Final(const void* data)
{
	SHA1_Update(c, data, strlen((const char *)data));
	SHA1_Final(value, c);
	for (int i = 0; i < 20; ++i)
	{
		sprintf(&final_value[i * 2], "%02x", value[i]);
	}
}
void* Hash_1::get_Final()
{
	return final_value;
}

