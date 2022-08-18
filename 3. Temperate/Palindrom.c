#include<stdio.h>

int main () {
	int num, rev=0, rem, org;
	
	printf("please enter num:");
	scanf("%d" , & num);
	
	org = num;
	
	while(num !=0){
		rem = num%10;
		rev = rev*10+rem;
		num = num/10;
	}
	
	printf("%d is revers number .\n" , rev);
	
	if(org == rev) {
		printf("%d is palindrom number" , org);
	} else {
		printf("%d is not palindrom number" , org);
	}

	return 0;
}
