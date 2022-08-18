#include<stdio.h>

int add (int a, int b) {
	int c=a+b;
	return c;
}

int sub (int x, int y) {
	int z=x-y;
	return z;
}

int mul (int a, int b) {
	int c=a*b;
	return c;
}

int div (int a, int b) {
	int c=a/b;
	return c;
}

int main () {
	int a, b, res;
	char op;
	
	printf("Please enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	printf("Please enter operator: ");
	scanf(" %c", &op);
	
	switch (op) {
		case '+':
			res = add(a, b);
			break;
		case '-':
			res = sub(a, b);
			break;
		case '*':
			res = mul (a, b);
			break;
		case '/':
			res = div(a, b);
			break;
		default:
			printf("Invalid operator");
	}
	
	printf("%d %c %d =%d", a, op, b, res);
	
	return 0;
}
