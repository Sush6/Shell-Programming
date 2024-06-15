#include <signal.h>

void sighand(int signum){
	printf(" meeting at 5pm\n");
	alarm(5);
}

main(){
	signal(SIGALRM,sighand);
	alarm(5);
	while(1){
	}
}
