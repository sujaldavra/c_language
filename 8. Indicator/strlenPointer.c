#include<stdio.h>

void findLengthofstr(char *s) {
	int counter=0;
	
	while (*s != '\0') {
		counter++;
		s++;
	}
	
	printf("Length of string is: %d", counter);
}

int main () {
	char str[50];
	
	printf("Please enter string:");\
	gets(str);
	
	findLengthofstr(str);
	
	return 0;
}
