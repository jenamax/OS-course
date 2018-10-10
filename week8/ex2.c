#include <stdlib.h>
#include <unistd.h>

int main(){
	for (int i = 0; i < 10; i++){
		int *ptr = malloc(10485760);
		memset(ptr, 0, 10485760);
		sleep(1);
	}
	return 0;
}
