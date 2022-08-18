#include<stdio.h>

int main () {
	char ch;
	
	printf("please enter any character:");
	scanf("%c" , &ch);
	
	switch(ch) {
		case 'M' :
		printf("Monday");
		break;
		case 'T' :
		printf("Tuesday");
		break; 
		case 'w' :
		printf("Wednesday");
		break;
		case 't' :
		printf("thursday");
		break;
		case 'F' :
		printf("Friday");
		break;
		case 'S' :
		printf("Saturday");
		break;
		case 's' :
		printf("sunday");
		break;
		default :
			printf("Invalid input");
	}
	
}
