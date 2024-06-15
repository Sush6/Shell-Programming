#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

static sigcounter = 0;
void sighand(int signum)
{
	printf("%s :: Handler invoked by signal %d\n",__func__,++sigcounter);
}

int main()
{
	signal(SIGINT,SIG_IGN);
	printf("%s :: signal 1 now set to be ignored \n",__func__);
	getchar();

	signal(SIGINT,sighand);
	printf("%s :: Application specific handler signal \n",__func__);
	getchar();

	signal(SIGINT,SIG_DFL);
	printf("%s :: Default handler \n",__func__);
	getchar();
	return 0;

}
