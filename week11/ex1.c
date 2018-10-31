#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <string.h>
int main(){
        printf("1");

	int myFile = open("ex1.txt", O_RDWR);
       	struct stat myStat = {};
        printf("1");
       	off_t size = myStat.st_size;
       	char *addr;
       	addr = mmap(NULL, size, PROT_READ|PROT_WRITE, MAP_SHARED, myFile, 0);
        char s[] = "This is a nice day";
	for (int i = 0; i < size; i++){
		addr[i] = ' ';
	}
	munmap(addr, size);
	for (int i = 0; i < strlen(s); i++){
		addr[i] = s[i];
	}
	close(myFile);
       	return 0; 
} 
