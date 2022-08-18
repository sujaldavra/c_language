#include<stdio.h>

int main () {
	FILE *fp1, *fp2;
	char file1[50], file2[50], ch;
	
	printf("Please enter file name 1:");
	gets(file1);
	
	printf("Please enter file name 2:");
	gets(file2);
	
	fp1 = fopen(file1, "r");
	fp2 = fopen(file2, "w");
	
	ch = fgetc(fp1);
	
	while (ch != EOF) {
		fputc(ch, fp2);
		ch = fgetc(fp1);
	}
	
	return 0;
}
