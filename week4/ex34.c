#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int main(){
	char command[256];
	while (strcmp(command, "exit") != 0){
		scanf("%s", command);
		
		if (strcmp(command, "pwd") == 0){
			system("pwd");
		}

		if (strcmp(command, "top") == 0){
			system("top &");
		}

		if (strcmp(command, "ls") == 0){
                        system("ls");
                }

		if (strcmp(command, "pstree") == 0){
                        system("pstree");
                }
		
		if (command[0] == 'c' && command [1] == 'd'){
                        system(command);
                }


	}
	return 0;
}
