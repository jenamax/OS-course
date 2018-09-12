#include <sys/types.h>
#include <unistd.h>

int main(){
	for (int i = 0; i < 3; i++){
		fork();
	}
	sleep(15);
	return 0;
}

// at first the process a.out create 3 child processes when it is going through 3 steps of loop; 
// then first child process create 2 child processes because one iteration of the loop passed
// for the second child process two iteration passed so it creates one child process
// the third child process doesn't create another children because all 3 iterations of loop passed
// analogically for children of child processes
