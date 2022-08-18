#include<stdio.h>

int main () {
	int x, y, *ptr;
	
	x = 10;
	ptr = &x;
	y = *ptr;
	
	printf("Value of x is %d\n", x);
	printf("%d is stored at address %u\n", x, &x);
	printf("%d is stored at address %u\n", *&x, &x);
	printf("%d is stored at address %u\n", *ptr, ptr);
	printf("%d is stored at address %u\n", ptr, &ptr);
	printf("%d is stored at address %u\n", y, &y);
	
	*ptr = 25;
	printf("Now x = %d", x);

	return 0;
}
