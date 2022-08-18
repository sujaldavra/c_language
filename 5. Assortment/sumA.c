#include<stdio.h>

int main () {
	int arr1[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	int arr2[3][3] = { 
		{1, 1, 1},
		{1, 1, 1},
		{1, 1, 1}
	};
	
	int sum[3][3] = {0};
	
	int i, j;
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			printf ("%d ", sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
