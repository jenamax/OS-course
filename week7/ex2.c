#include <stdio.h>
#include <stdlib.h> 


int main(){
	int N;
	scanf("%i", &N);
	int *arr = malloc(N * sizeof(int));
	for (int i = 0; i < N; i++){
		arr[i] = i;
		printf("%i", arr[i]);
	}
	printf("\n");
	free(arr);
	return 0;
}
