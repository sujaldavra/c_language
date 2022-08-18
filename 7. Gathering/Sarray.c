#include<stdio.h>

int sumofarray(int arr[], int n) {
	int i, sum=0;
	
	for (i=0; i<n; i++) {
		sum = sum +arr[i];
	}
	
	return sum;
}

int main () {
	int arr[50], size, i, res;
	
	printf("Please enter size of an array:");
	scanf("%d", &size);
	
	for (i=0; i<size; i++) {
		scanf("%d", &arr[i]);
	}
	
	res = sumofarray(arr, size);
	
	printf("Sum of array is %d", res);
	
	return 0;
}
