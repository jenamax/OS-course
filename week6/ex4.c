#include <stdio.h>
#include <signal.h>

void usr1_handler(){ // this signal cannot be handled so when SIGUSR1 occur string "USR1 occur" will be printed
        printf("USR1 occur\n");
}

void kill_handler(){ // SIGKILL cannot be handled so nothing will be printed when it occur
	printf("KILL occur\n");
}

void stop_handler(){ // SIGSTOP cannot be handled so so nothing will be printed when it occur
	printf("STOP occur\n");
}

int main(){
        signal(SIGKILL, kill_handler);
	signal(SIGSTOP, stop_handler);
	signal(SIGUSR1, usr1_handler);
        while(1){
                sleep(1);
        }
        return 0;
}

