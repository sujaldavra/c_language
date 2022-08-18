#include<stdio.h>

int main () {
	char str[50];
	int n;
	
	printf("Please enter any string:");
	gets(str);
	
	n = strlen(str);
	
	printf("Size of given string: %d", n);
	
	return 0;
}
