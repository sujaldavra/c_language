#include<stdio.h>

struct marks {
	int roll_no;
	char name[50];
	int chem_marks;
	int phy_marks;
	int maths_marks;
};

int main () {
	int i;
	
	struct marks m[2];
	
	for (i=0; i<2; i++) {
		printf("Please enter in formation for student %d\n", i+1);
		
		printf("Please enter roll number: ");
		scanf("%d", &m[i].roll_no);
		
		printf("Please enter name: ");
		scanf("%s", &m[i].name);
		
		printf("Please enter Chemistry marks: ");
		scanf("%d", &m[i].chem_marks);
		
		printf("Please enter Physics marks: ");
		scanf("%d", &m[i].phy_marks);
		
		printf("Please enter maths marks: ");
		scanf("%d", &m[i].maths_marks);
	}
	
	for (i=0; i<2; i++) {
		float per;
		
		per = (m[i].chem_marks + m[i].phy_marks + m[i].maths_marks)/3;
		
		printf("%d -- %f\n", m[i].roll_no, per);
	}
	
	return 0;
}
