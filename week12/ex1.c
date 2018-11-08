#include <stdio.h>
#pragma warning(disable:4996)
int main(){

    FILE *file;
    file = fopen("/dev/random", "r");
    int c;
    int i = 0;
    while ((c = fgetc(file)) != EOF && i < 20)
    {
        printf("%c ",(char)c );
        i++;
    }
    printf("\n");

    return 0;
}
