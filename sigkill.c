#include<signal.h>

void sighandler(int signum)
{
	printf("caught signal:%d pressed ctrl+c!!\n
