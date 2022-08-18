#include<stdio.h>

int main () {
	int num , counter = 0;
	
	printf("please entr any number:");
	scanf("%d" , &num);
	
	while(num > 0) {
		num = num/10;
		counter++;
	}
	
	printf("number of digit is: %d" , counter);
	
	return 0;
}
