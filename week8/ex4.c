#include <stdlib.h>
#include <unistd.h>
#include <sys/resource.h>

int main(){
	struct rusage us;
	int *ptr;
        for (int i = 0; i < 10; i++){
                ptr = malloc(10485760);
                memset(ptr, 0, 10485760);
		getrusage(RUSAGE_SELF, &us);
		printf("%li\n", us.ru_idrss);
                sleep(1);
        }
        return 0;
}

