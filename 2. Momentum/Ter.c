// ternary operator
// condtion ? true . false

#include<stdio.h>

intain () {
	int num; 
	
	printf("please enter any number:");
	scanf("%d" , &num);
	
	num % 2 == 0 ? printf("Even number") : printf("odd number");

    return 0;
}

