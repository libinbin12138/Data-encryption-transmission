#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include"Client_Tcp.h"

int main(int argc, char* argv[])
{
	Client_Tcp cl_tcp("192.168.182.138",888);
	cl_tcp.ShowMenu();
	while(1)
	{
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 1:
			system("clear");
			cl_tcp.key_Agreement(12345,1);
			break;
		case 2:
			break;
		case 3:
			exit(0);
			break;
		}
	}
	return 0;
}