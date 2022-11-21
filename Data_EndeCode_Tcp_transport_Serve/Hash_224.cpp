#include "Hash_224.h"

Hash_224::Hash_224()
{
	c = new SHA256_CTX;
	value = new unsigned char[28];
	final_value = new char[57];
	SHA224_Init(c);
}
Hash_224::~Hash_224()
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
void Hash_224::create_Final(const void* data)
{
	SHA224_Update(c, data, strlen((const char *)data));
	SHA224_Final(value, c);
	for (int i = 0; i < 28; ++i)
	{
	 sprintf(&final_value[i * 2], "%02x", value[i]);
	}
}
void* Hash_224::get_Final()
{
	return final_value;
}