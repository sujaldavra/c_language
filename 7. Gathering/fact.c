#include<stdio.h>

int findfactorial(int n) {
	if (n>1) {
		return n * findfactorial (n-1);
	} else {
		return 1;
	}
}

int main () {
	int num, res;
	
	printf("Please enter number:");
	scanf("%d", &num);
	
	res = findfactorial(num);
	
	printf("factorial value is: %d", res);
	
	return 0;
}
