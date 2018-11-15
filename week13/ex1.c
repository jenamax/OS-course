#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   char ch, file_name[25];
   FILE *fp;
 
   printf("Enter name of a file you wish to see\n");
   gets(file_name);

   fp = fopen(file_name, "r");
   if (fp == NULL)
   {
       perror("Error while opening the file.\n");
       exit(EXIT_FAILURE);
   }

   int e = 0;
   while((ch = fgetc(fp)) != '\n'){
      //printf("%c", ch);
      if (ch == ' ')
         e++;
   }
   e++;

   (ch = fgetc(fp));
   while((ch = fgetc(fp)) != '\n');
   (ch = fgetc(fp));

   int p = 0;
   while((ch = fgetc(fp)) != '\n'){
        p++;
	while((ch = fgetc(fp)) != '\n'){}
        //printf("%c\n", ch);
   }

   fclose(fp);

   fp = fopen(file_name, "r"); 

   int n = 0;

   int resourses[e];

   for (int i = 0; i < e; i++){
       fscanf(fp, "%i", &n);
       resourses[i] = n;
   }

   int A[e];
   for (int i = 0; i < e; i++){
       fscanf(fp, "%i", &n);
       A[i] = n;
   }
   
   int C[p][e];
   for (int i = 0; i < p; i++){
   	for (int j = 0; j < e; j++){
		fscanf(fp, "%i", &n);
		C[i][j] = n;
  	}
   }

   int R[p][e];
   int M[p][e]; // marked processes
   for (int i = 0; i < p; i++){
        for (int j = 0; j < e; j++){
                fscanf(fp, "%i", &n);
                R[i][j] = n;
		if (R[i][j] <= A[j])
                	M[i][j] = 1;
		else
			M[i][j] = 0;
        }
   }

   int dl = 0;

   for (int i = 0; i < p; i++){
        for (int j = 0; j < e; j++){
                if (M[i][j] == 0){
                        printf("deadlock in proc %i\n", i);
			dl = 1;
		}
        }
   }

   if (dl == 0)
   	printf("ok\n");

   fclose(fp);
   return 0;
}
