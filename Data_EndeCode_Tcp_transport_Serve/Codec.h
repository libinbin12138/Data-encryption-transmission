#pragma once
#include<iostream>
#include<string>


using namespace std;
struct Info
{

};
class Codec
{
public:
	Codec()
	{

	};
	 //virtual void initMessage()=0;
	 virtual string encodeMsg()=0;
	 virtual void* decodeMsg()=0;
	 ~Codec()
	 {

	};
private:
	
};