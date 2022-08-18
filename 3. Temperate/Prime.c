#include<stdio.h>

int main () {
	int num, flag=0, i;
	
	printf("please enter number:");
	scanf("%d" , &num);
	
	for(i=2; i<num; i++) {
		if(num%i ==0) {
			flag = 1;
			break;
		}
	}
	
	if(flag == 0) {
		printf("%d is a prime number." , num );
	} else {
		printf("%d is a not prime number." , num );
	}
	
	return 0;
}
