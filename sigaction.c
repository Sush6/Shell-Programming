#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sig_fun(int);
int sig;

main()
{
	struct sigaction signalact,old_action;

	signalact.sa_handler = sig_fun;
	sigemptyset(&signalact.sa_mask);
	signalact.sa_flags =0;
	sigaction(SIGINT, &signalact, &old_action);
	while(1){
		printf("hello world\n");
		sleep(1);
	}
}

void sig_fun(int sig)
{
	printf(" sushree: %d\n",sig);
//	signal(sigint,SIG_DFL);
}
