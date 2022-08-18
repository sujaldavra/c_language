#include<stdio.h>

int main () {
	float cel , far ;
	
	printf("please enter temperature in celsius:");
	
	scanf("%f" , &cel);
	
	far=(cel * 9 / 5) + 32;
	
	printf("fahrenheit value is:%f" , far );


	return 0;
}
