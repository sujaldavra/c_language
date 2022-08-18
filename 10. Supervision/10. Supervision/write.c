#include<stdio.h>

int main () {
	FILE *fp;
	int num;
	
	fp = fopen("data.txt", "w");
	
	printf("Please enter any number:");
	scanf("%d", &num);
	
	fprintf(fp, "%d", num);
	
	fclose(fp);
	
	return 0;
}
