#include <stdio.h> 
#include <stdlib.h> 
#include <pthread.h> 

void *print(void *n){
        int i = (int) n;
        printf("thread %i\n", i);
        printf("some text from thread %i\n", i);
}

int main(){
        int n;
        scanf("%i", &n);
        pthread_t thread_id;
        for (int i = 0; i < n; i++){
                pthread_create(&thread_id, NULL, print, (void *)i);
		pthread_join(thread_id, NULL);
        }
        pthread_exit(NULL);
        return 0;
}


