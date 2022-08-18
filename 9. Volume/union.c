#include<stdio.h>

union Demo {
	int i;
	float f;
	char c;
} u1;

int main () {
	u1.i = 10;
	printf("%d\n", u1.i);
	
	u1.f = 25.5;
	printf("%f", u1.f);
	
	return 0;
}
