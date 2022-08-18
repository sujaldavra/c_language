#include<stdio.h>

int main () {
	char c;
	
	c= 'a';
	
	do {
		printf ("%c\n" , c);
		c++;
	} while(c <='z');
	
	return 0;
}
