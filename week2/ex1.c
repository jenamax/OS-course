#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(){

	int a = INT_MAX;
	float b = FLT_MAX;
	double c = DBL_MAX;
	printf("a = %i, size %lu \n", a, sizeof(a));
	printf("a = %f, size %lu \n", b, sizeof(b));
	printf("a = %f, size %lu \n", c, sizeof(c));
	return 0;
}
