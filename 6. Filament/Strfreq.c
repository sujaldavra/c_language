#include<stdio.h>

int main () {
	char str[50];
	int freq[30] = {0};
	int i;
	
	printf("Please enter any string:");
	gets(str);
	
	i=0;
	
	while (str[i] != '\0') {
		freq [str[i] - 'a']++;
		i++;
	}
	
	i=0;
	while (i<30) {
		if (freq[i] !=0) {
			printf("%c %d\n", i+'a', freq[i]);
		}
		
		i++;
	}
	
	return 0;
}
