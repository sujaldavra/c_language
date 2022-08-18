#include<stdio.h>

int main () {
	int arr[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
		
	int sum = 0;
	
	int i, j;
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			if (i==j) {
				sum = sum + arr[i][j];
			}
		}
	}
	
	printf("sum of diagonal elements is: %d", sum);
	
	return 0;
}
