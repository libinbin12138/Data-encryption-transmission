#include "Hash_myUsed.h"

Hash_myUsed::Hash_myUsed()
{
	hash = NULL;
	final_value=NULL;
}

Hash_myUsed::Hash_myUsed(int flags, void* data)
{
	//final_value = new void*[64];
	switch(flags)
	{
	case 0:
		hash = new Hash_Md5;
		break;
	case 1:
		hash = new Hash_1;
		break;
	case 224:
		hash = new Hash_224;
		break;
	}
	hash->create_Final(data);
	final_value = hash->get_Final();
}
Hash_myUsed::Hash_myUsed(HashType type, void* data)
{
	{
		switch (type)
		{
		case M_MD5:
			hash = new Hash_Md5;
			break;
		case M_SHA1:
			hash = new Hash_1;
			break;
		case M_SHA224:
			hash = new Hash_224;
			break;
		}
		hash->create_Final(data);
		final_value = hash->get_Final();
	}
}
void* Hash_myUsed::HashUsed_value()
{
	return final_value;
}
Hash_myUsed::~Hash_myUsed()
{

}