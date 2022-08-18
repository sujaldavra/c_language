#include<stdio.h>

int main () {
	char str[50];
	
	int i, len, counter=0;
	
	printf("Please enter any string:");
	gets(str);
	
	len = strlen(str);
	
	for (i=0; i<len/2; i++) {
		if (str[i] == str[len-i-1]) {
			counter++;
		}
	}
	
	if (i == counter) {
		printf ("String is Palindrome");
	} else {
		printf ("String is not Palindrome");
	}
	
	return 0;
}
