#include<stdio.h>

int main () {
	char ch ;
	
	printf("please cher anyb value:");
	scanf("%c" , &ch);
	
	if(ch > 'a' && ch <= 'z') {
		printf ("alphabet");
	}else if (ch >= '0' && ch <= '9') {
		printf ("digit");
	} else {
		printf ("special character");
	}
	
	return 0;
}
