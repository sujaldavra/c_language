#include<stdio.h>

int main () {
	int num , fact = 1;
	
	printf("please enter num:");
	scanf("%d" , &num);
	
	while (num >=1) {
		fact = fact*num;
		num--;
	}
	
	printf("Factorial value is: %d" , fact);
	
	return 0;
}
