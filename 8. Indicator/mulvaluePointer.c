#include<stdio.h>

void decide (int a, int b, int *g, int *l) {
	if (a > b) {
		*g = a;
		*l = b;
	} else {
		*g = b;
		*l = a;
	}
}


int main () {
	int a, b, greater, lesser;
	
	printf ("Please enter any two value:");
	scanf("%d %d", &a, &b);
	
	decide(a, b, &greater, &lesser);
	
	printf("Greater value is %d\n", greater);
	printf("Lesser valu is %d", lesser);
	
	return 0;
}
