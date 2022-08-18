#include<stdio.h>

void Rectangle () {
	int len, bre, area;
	printf("Please enter length and Breadth ");
	scanf("%d %d", &len, &bre);
	area = len * bre;
	printf("Area of Rectangle is%d ", area);
}

void Triangle () {
	float height, base, area;
	printf("Please enter height and base ");
	scanf("%f %f", &height, &base);
	area = 1/2 * height * base;
	printf("Area of Triangle is %f", area);
}

void Circle () {
	float radius, area;
	printf("Please enter radius ");
	scanf("%f", &radius);
	area = 3.14 * radius * radius;
	printf("Area of Circle is %f", area);
}

void Square () {
	float side, area;
	printf("Please enter radius ");
	scanf("%f", &side);
	area = side * side;
	printf("Area of square is %f", area);	
}

int main () {
	char op;
	
	printf("Please enter 'r' for Rectangle\n");
	printf("Please enter 't' for Triangle\n");
	printf("Please enter 'c' for Circle\n");
	printf("Please enter 's' for Square");
	
	scanf(" %c", &op);
	
	switch (op) {
		case 'r':
			Rectangle ();
			break;
		case 't':
			Triangle ();
			break;
		case 'c':
			Circle ();
			break;
		case 's':
			Square ();
			break;
		default:
			printf("Invaild Operator");
	}
	
	return 0;
}
