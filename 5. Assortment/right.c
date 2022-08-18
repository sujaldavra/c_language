#include<stdio.h>

int main () {
	int arr[50], size, i, last;
	
	printf("Please enter size of an array:");
	scanf("%d", &size);
	
	for (i=0; i<size; i++) {
		scanf("%d", &arr[i]);
	}
	
	last = arr[size-1];
	
	for (i=size; i>=0; i--) {
		arr[i] = arr[i-1];
	}
	
	arr[0] = last; 
	
	for (i=0; i<size; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
