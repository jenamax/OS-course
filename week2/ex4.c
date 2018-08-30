#include <stdio.h>

void swap(int* a, int* b){
	int a1 = *a, b1 = *b;
	*a = b1;
	*b = a1;
	
	
}

int main(){
	int a, b;
	scanf("%i %i", &a, &b);
	printf("a = %i, b = %i\n", a, b);
	swap(&a, &b);
	printf("a = %i, b = %i\n", a, b);
	return 0;
}
