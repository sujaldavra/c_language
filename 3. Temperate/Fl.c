#include<stdio.h>

int main () {
	int num , first_digit , last_digit;
	
	printf("please enter number:");
	scanf("%d" , &num);
	
	last_digit = num%10;
	
	while (num >=10) {
		num = num/10;
	}
	
	first_digit =num;
	
	printf("sum of first and last digit is: %d" , first_digit+last_digit);
	
	return 0;
}
