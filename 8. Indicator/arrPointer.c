#include<stdio.h>

int main () {
	int arr[50], size, i;
	int *p;
	
	printf("Please enter size of an array:");
	scanf("%d", &size);
	
	for (i=0; i<size; i++) {
		scanf("%d", &arr[i]);
	}
	
	p = &arr[0];
	
	for (i=0; i<size; i++) {
		printf("%d ", *(p+i));
	}
	
	return 0;
}
