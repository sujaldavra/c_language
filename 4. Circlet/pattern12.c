#include<stdio.h>

int main () {
	int i, j, k;
	
	for(i=5; i>=1; i--) {
		for(k=4; k>i-1; k--) {
			printf(" ");
		}
		
		for(j=1; j<=i; j++) {
			printf("%d" , j);
		}
		printf("\n");
	}
	
	return 0;
}
