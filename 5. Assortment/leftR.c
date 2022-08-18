#include<stdio.h>

int main () {
	int arr[50], size, i, first;
	
	printf("Please enter size of an array:");
	scanf("%d", &size);
	
	for (i=0; i<size; i++) {
		scanf("%d", &arr[i]);
	}
	
	first = arr[0];
	
	for (i=0; i<size; i++) {
		arr[i] = arr[i+1];
	}
	
	arr[size-1] = first;
	
	for (i=0; i<size; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
