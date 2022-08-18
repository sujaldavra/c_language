#include<stdio.h>

int main () {
	char str1[50]; 
		
	printf("Please enter any string 1:");
	gets(str1);

	strrev(str1);
	
	puts(str1);

	return 0;
}
