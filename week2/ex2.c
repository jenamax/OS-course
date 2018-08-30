#include <stdio.h>
#include <string.h>

int main(){
	char str[256];
	scanf("%s", str);
	char rev[256];
	strcpy(rev, str);
	for (int j = 0, i = strlen(str) - 1; i >= 0; j++, i--){
		rev[j] = str[i];
	}
	printf("%s\n", rev);
	return 0;
}
