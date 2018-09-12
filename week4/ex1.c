#include <stdio.h>
#include <sys/types.h>

int main(){
	int n;
	fork();
	printf("Hello form process PID %d - %d\n", getpid(), n);
	return 0;
}


// in output there are 20 strings "Hello form process PID %d - %d\n" because we run this program 10 times and each of these runs produce two processes and each process result is this string
