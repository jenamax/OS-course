#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

int main(){
        char s1[] = "123", s2[256];
        int fd[2];
        pipe(fd);
        int data = write(fd[1], s1, strlen(s1));
	fork();
        data = read(fd[0], s2, 256);
        printf("transfered text: %s\n", s2);
        return 0;
}

