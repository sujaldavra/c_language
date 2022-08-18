#include<stdio.h>

int main () {
	char str1[50], str2[50];
		
	printf("Please enter any string 1:");
	gets(str1);
	
	printf("Please enter any string 2:");
	gets(str2);
	
	strcat(str1, str2);
	
	puts(str1);
	
	return 0;
}
