#include<stdio.h>

int main () {
	char str1[50], str2[50];
		
	printf("Please enter any string 1:");
	gets(str1);
	
	printf("Please enter any string 1:");
	gets(str2);
	
	if (strcmp(str1, str2) == 0) {
		printf("Both string are same:");
	} else {
		printf("Both string are not same:");
	}
	
	return 0;
}
