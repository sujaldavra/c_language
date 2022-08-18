#include<stdio.h>

int main () {
	int arr[50], size, i, m1=0, m2=0;
	
	printf("please enter size of an array:");
	scanf("%d" , &size);
	
	for(i=0; i<size; i++) {
		scanf("%d" , &arr[i]);
	}
	
	for (i=0; i<size; i++) {
		if (arr[i] > m1) {
			m2 =  m1;
			m1 = arr[i];
		} else if (arr[i] <m1 && arr[i] > m2) {
			m2 = arr[i];
		}
	}
	
	printf("largest number is :%d\n",m1);
	printf("2nd largest number is :%d  ",m2);
	
	return 0;
}
