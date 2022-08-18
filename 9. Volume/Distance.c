#include<stdio.h>

struct Distance {
	int inch;
	int feet;
} d1, d2, total;

int main () {
	printf("Please enter inch and feet for distance 1: ");
	scanf("%d %d", &d1.inch, &d1.feet);
	
	printf("Please enter inch and feet for distance 2: ");
	scanf("%d %d", &d2.inch, &d2.feet);
	
	total.inch = d1.inch + d2.inch;
	total.feet = d1.feet + d2.feet;
	
	while (total.inch >= 12) {
		total.inch = total.inch - 12;
		total.feet++;
	}
	
	printf("Please Distance is : %d %d", total.feet , total.inch);
	
	return 0;
}
