#include<stdio.h>

int main () {
	int a = 10;
	float b = 3.5;
	char c = 'A';
	
	printf("%d is stored at address %u\n", a, &a);
	printf("%f is stored at address %u\n", b, &b);
	printf("%c is stored at address %u\n", c, &c);
	
	
	return 0;
}
