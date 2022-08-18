#include<stdio.h>

int main () {
	int arr[50], size, i;
	
	printf("please enter size of an array:");
	scanf("%d", &size);
	
	printf("please enter elements:");
	for(i=0; i<size; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("\nNegative elements are:\n");
	for(i=0; i<size; i++) {
		if(arr[i] <0) {
			printf("%d ", arr[i]);
		}
	}
	
	return 0;
}
