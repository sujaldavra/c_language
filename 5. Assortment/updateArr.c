#include<stdio.h>

int main () {
	int arr[50], size, i, pos, newEle;
	
	printf("Please enter size of an array:");
	scanf("%d" , &size);
	
	for(i=0; i<size; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("Please enter position of new element:");
	scanf("%d", &pos);
	
	printf("Please enter new element:");
	scanf("%d", &newEle);
	
	arr[pos] = newEle;
	
	for(i=0; i<size; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
