#include<signal.h>
#include <stdio.h>

void sighandler(int signum)

void sighandler1(int signum)
{
	printf("caught signal:%d !!!!!!!!!!!!\n",signum);
	signal(SIGINT,SIG_DFL);
}

int main()
{
	int retval=0;
	signal(SIGINT,sighandler);
//	retval=signal(SIGINT,sighandler1);
//	printf("retval %d\n",retval);
	while(1)
	printf("this is in infinite loop\n");

}

