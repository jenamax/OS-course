#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int n = atoi(argv[1]);
	for (int i = 1; i <= n; i++){
		for (int j = 0; j < n - i; j++)
			printf(" ");
		for (int k = 0; k < 2 * i - 1; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
