#pragma once
class Hash_Base
{
public:
	Hash_Base()
	{

	}
	~Hash_Base()
	{

	}
	virtual void create_Final(const void * data)=0;
	virtual void* get_Final()=0;
};

