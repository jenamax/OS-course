#include <sys/types.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h> 
#include <string.h>


int main(){
	DIR *dir = opendir("tmp");
	struct stat *st;
	struct dirent *dp; 
	while ((dp = readdir(dir)) != NULL) {
		lstat(dp, &st);
		if (st->st_nlink >= 2){
			char buffer[256];
			sprintf(buffer, "find -inum %i", st->st_ino);
			system(buffer);
		}
	}
	return 0;
}
