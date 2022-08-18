#include<stdio.h>

int main () {
	FILE *fp;
	int num;
	
	fp = fopen("data.txt", "a");
	
	if (fp == NULL) {
		printf("File not opened");
		exit(0);
	}
	
	printf("Please enter any number:");
	scanf("%d", &num);
	
	fprintf(fp, "%d", num);
	
	fclose(fp);
	
	return 0;
}
