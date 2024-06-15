#include <stdio.h>
#include <signal.h>
void sighandler(int signum){

printf("Press <^\\> kye\n");

printf("I got signal:%d!!",signum);


}
int main(){

signal(SIGQUIT,sighandler);
while(1){
printf("Hello World\n");
sleep(1);
}

}
