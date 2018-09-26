#include <stdio.h>
#include <signal.h>

void signal_handler(){
	printf("Interrupt occur\n");
}

int main(){
	signal(SIGINT, signal_handler);
	while(1){
		sleep(1);
	}
	return 0;
}
