## TCP/IP网络编程

### chapter1 理解网络编程和套接字

#### Winsock的初始化

进行Winsock编程时，首先必须调用WSAStartup函数，设置程序中用到的Winsock版本，并初始化相应的版本库。

```c++
#include <winsock2.h>
int WSAStartup(WORD WVersionRequested,LPWSADATA lpWSAData);//成功返回0,；失败非0
```

lpWSAData:` WSADATA`结构体变量的地址值。

`WORD`类型：是通过typedef声明的`unsigned short`类型。

初始化:

```c++
int main(int argc,char*argv[])
{
    WSDATA wsaData;
    ...
    if(WSAStartup(MAKEWORD(2,2),&wsaData)!=0)
        ErrorHandling("WSAStartup() error!");
    ...
    return 0;
}
```



##### 服务端

```c++
#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>
#pragma comment(lib,"ws2_32.lib")

int main(int argc, char const *argv[])
{
	WSADATA wsaData;
	SOCKET hServsock,hClntsock;
	SOCKADDR_IN servAddr, clntAddr;
	int szClntAddr;
	char message[]="hello world";

	if(argc!=2)
	{
		printf("usage:%s <port>\n",argv[0] );
		exit(1);
	}
	if(WSAStartup(MAKEWORD(2,2),&wsaData)!=0)
	{
		printf("WSAStartup() error!\n");
		return 0;
	}

	hServsock=socket(PF_INET,SOCK_STREAM,0);
    //Protocol families, same as address families for now.
    /* socket(int domain, int type, int protocol);  
    	domain ： "AF_INET"
    	type：套接字类型：SOCK_STREAM（TCP）， SOCK_DGRAM （UDP）
    	protocol：0
    */
	if (hServsock == INVALID_SOCKET)
	{
		printf("socket() error！\n");
		return 0;
	}

	memset(&servAddr,0,sizeof(servAddr));
	servAddr.sin_family = AF_INET; // internetwork: UDP, TCP, etc.
    //sin_family指代协议族，在socket编程中只能是AF_INET
    //sin_port存储端口号（使用网络字节顺序）
    //sin_addr存储IP地址
    servAddr.sin_addr.s_addr = htonl(INADDR_ANY);//Host to Network Long
    servAddr.sin_port = htons(atoi(argv[1]));//Host to Network Short
    
	if (bind(hServsock, (SOCKADDR*)&servAddr, sizeof(servAddr)) == SOCKET_ERROR)
	{
		printf("bind() error！\n");
		return 0;
	}

    if(listen(hServsock,5)==SOCKET_ERROR)
    {
		printf("listen() error！\n");
		return 0;
    }
	

    szClntAddr=sizeof(clntAddr);
    hClntsock=accept(hServsock,(SOCKADDR*)&clntAddr,&szClntAddr);//调用其受理客户端连接请求
    if(hClntsock==INVALID_SOCKET)
	{
		printf("accept() error！\n");
		return 0;
	}
	else{
		printf("I have a client!");
	}

	send(hClntsock,message,sizeof(message),0);
	closesocket(hClntsock);
	closesocket(hServsock);
	WSACleanup();

	return 0;
}


/*
 * Types：决定套接字的数据传输方式
 */
#define SOCK_STREAM     1               /* stream socket */
#define SOCK_DGRAM      2               /* datagram socket */
#define SOCK_RAW        3               /* raw-protocol interface */
#define SOCK_RDM        4               /* reliably-delivered message */
#define SOCK_SEQPACKET  5               /* sequenced packet stream */


```





```c++

#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>
#pragma comment(lib,"ws2_32.lib")

int main(int argc, char* argv[])
{
    WSADATA wsaData;
    SOCKET hSocket;
    SOCKADDR_IN servAddr;
    char message[30];
    int strLen;
    if(argc!=3)
    {
    	 printf("usage : %s ip port\n",argv[0]);
    	 return 0;
    }
    if(WSAStartup(MAKEWORD(2,2),&wsaData)!=0){
        printf("WSAStartup  failed\n");
        return 0;
    }
    hSocket = socket(PF_INET,SOCK_STREAM,0);
    if(hSocket == INVALID_SOCKET){
        printf("socket error\n");
        return 0;
    }
    memset(&servAddr,0,sizeof(servAddr));
    servAddr.sin_family = AF_INET;
    //inet_addr()将字符串点数格式地址转化成无符号长整型（unsigned long s_addr s_addr;）
    servAddr.sin_addr.s_addr = inet_addr(argv[1]);
    servAddr.sin_port = htons(atoi(argv[2]));

    if(connect(hSocket,(SOCKADDR*)&servAddr,sizeof(servAddr)) == SOCKET_ERROR){
        printf("connect error\n");
        return 0;
    }
    strLen = recv(hSocket,message,sizeof(message)-1,0);
    if (strLen == -1)
    {
        printf("recv error\n");
    }
    printf("message from server:%s\n",message);
    closesocket(hSocket);
    WSACleanup();

    return 0;
}
```

* > 网络字节序和本机字节序，为什么要分？什么是大端序小端序？

    网络字节序统一成大端序，先把数据组转换成大端序格式在进行网络传输。因此计算机收数据时，该数据应该是网络字节序；小端序系统传输数据时，应该转化为大端序排序方式。

* > `sockaddr_in`的成员分析以及`sockaddr`的成员？各自以是什么字节保存？为什么？

  * `sin_port`:

  * `sin_addr`:

  * `sin_zero`:
* > 字节序转换
   + `htons`:host to net (short)
   + `ntohs`:
   + `htonl`:
   + `ntohl`:
    ```c
    unsigned short htons(unsigned short);
    ...
    ```
s代表2个字节:一般用于端口号切换；l代表4个字节:一般用于ip地址转换。

    