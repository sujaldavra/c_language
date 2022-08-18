#include<stdio.h>

int main () {
	FILE *fp1, *fp2, *fp3, *fp4;
	int i, n, flag=1;
	
	fp1 = fopen("data.txt", "w");
	
	for (i=1; i<=10; i++) {
		if (i == 10) {
			fprintf(fp1, "%d", i);
		} else {
			fprintf(fp1, "%d ", i);
		}
	}
	
	fclose(fp1);
	
	fp1 = fopen("data.txt", "r");
	fp2 = fopen("even.txt", "w");
	fp3 = fopen("odd.txt", "w");
	fp4 = fopen("prime.txt", "w");
	
	while (!feof(fp1)) {
		fscanf (fp1, "%d", &n);
		
		if (n % 2 == 0) {
			if (n == 2) {
				fprintf(fp4, "%d ", n);
			}
			fprintf(fp2, "%d ", n);
		} else {
			for (i=2; i<n; i++) {
				if(n % i == 0) {
					flag = 0;
					break;
				}
			}
			if (flag == 1) {
				fprintf(fp4, "%d ", n);
			}
			fprintf(fp3, "%d ", n);
		}
	}
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fclose(fp4);
	
	return 0;
}
