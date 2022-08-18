#include<stdio.h>

int main () {
	int arr[50], size, i, j, ctr=0, freq[50];
	
	printf("please enter size of an array:");
	scanf("%d" , &size);
	
	for (i=0; i<size; i++) {
		scanf("%d" , &arr[i]);
		freq[i] = -1;
	}
	
	for (i=0; i<size; i++) {
		ctr = 1;
		for (j=i+1; j<size; j++) {
			if(arr[i] == arr[j]) {
				ctr++;
				freq[j] = 0;
			}
		}
		
		if (freq[i] == -1) {
			freq[i] = ctr;
		}
	}
	
	for (i=0; i<size; i++) {
		if(freq[i] !=0) {
			printf("%d times %d\n" , freq[i], arr[i]);
		}
	}

	return 0;
}
