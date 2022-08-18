#include<stdio.h>

int main () {
	FILE *fp;
	int num;
	
	fp = fopen("data.txt", "r");
	
	if (fp == NULL) {
		printf("File not opened");
		exit(0);
	}
	
	fscanf(fp, "%d", &num);
	
	printf("%d", num);
	
	fclose(fp);
	
	return 0;
}
