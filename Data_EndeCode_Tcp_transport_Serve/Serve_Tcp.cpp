#include "Serve_Tcp.h"
void* recvRequest(void* arg)
{

}
Serve_Tcp::Serve_Tcp()
{

}
Serve_Tcp::Serve_Tcp(unsigned short port)
{
	this->port = port;
}
Serve_Tcp::~Serve_Tcp()
{

}

int Serve_Tcp::lfd_init()
{
	lfd = socket(AF_INET, SOCK_STREAM, 0);
	if (lfd == -1)
	{
		perror("接听套接字创建失败，请重试");
		return -1;
	}
	//端口复用
	int opt = 1;
	int ret = setsockopt(lfd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));
	if (ret == -1)
	{
		perror("端口复用设置失败，请重试");
		return -1;
	}
	//绑定
	struct sockaddr_in c_addr;
	c_addr.sin_family = AF_INET;
	c_addr.sin_port = htons(port);
	c_addr.sin_addr.s_addr = INADDR_ANY;
	ret = bind(lfd, (struct sockaddr*)&c_addr, sizeof(c_addr));
	if (ret == -1)
	{
		perror("绑定端口失败，请重试");
		return -1;
	}
	ret = listen(lfd, 128);
	if (ret == -1)
	{
		perror("监听失败，请重试");
		return -1;
	}
}
int Serve_Tcp::epoll_run()
{
	int epfd=epoll_create(10);
	if (epfd == -1)
	{
		perror("epoll_create失败，请重试");
		return -1;
	}
	
	epoll_event ev;
	ev.events = EPOLLIN;
	ev.data.fd = lfd;
	int ret = epoll_ctl(epfd, EPOLL_CTL_ADD, lfd, &ev);
	if (ret == -1)
	{
		perror("添加到epoll框架失败，请重试");
		return -1;
	}
	epoll_event evs[1024];
	int size = sizeof(evs) / sizeof(evs[0]);
	int flags = 1;
	//pthread_t pid= 0;
	while (1)
	{
		if (flags == -1)
		{
			return -1;
		}
		int num = epoll_wait(epfd, evs, size, 0);
			for (int i = 0; i < num; i++)
			{
				int curtfd = evs[i].data.fd;
				if (curtfd == lfd)
				{
					int ret = acceptConnect();
					if (ret == -1)
					{
						flags = -1;
					}
				}
				else
				{
					//pthread_create(&pid, NULL, recvRequest, NULL);

				}
			}
	}

}

int Serve_Tcp::acceptConnect()
{

}
//void* Serve_Tcp::recvRequest(void * arg)
