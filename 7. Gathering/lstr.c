#include<stdio.h>

int findLengthofstr(char str[]) {
	int len=0, i;
	i=0;
	
	while(str[i] != '\0') {
		len++;
		i++;
	}
	
	return len;
}

int main () {
	char str[50];
	int res;
	
	printf("Please enter string:");
	gets(str);
	
	res = findLengthofstr(str);
	
	printf("Length of string is:%d", res);
	
	return 0;
}
