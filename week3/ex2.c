#include <stdio.h>

void bubble_sort(int arr[], int N){
	int buffer;
	for (int i = 0; i < N - 1; i++){
		for (int j = 0; j < N - i - 1; j++){
			if (arr[j] > arr[j +1]){
				buffer = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = buffer;
			}
		}
	}
	
}

void printArr(int arr[], int N){
	for (int i = 0; i < N; i++){
		printf("%i", arr[i]);
        }
	printf("\n");

}

void main(){
	int N;
	scanf("%i", &N);
	int arr[N];
	int a;
	for (int i = 0; i < N; i++){
		scanf("%i", &a);
		arr[i] = a;
	}
	bubble_sort(arr, N);
	printArr(arr, N);
}
