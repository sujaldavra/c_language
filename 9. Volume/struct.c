#include<stdio.h>

struct student {
	int grid;
	float per;
	int age;
	char grade;
}s1, s2, s3; 


int main () {
	
	printf("Please enter information of strudent 1:");
	scanf("%d %f %d %c", &s1.grid, &s1.per, &s1.age, &s1.grade);
	
	printf("Student 1 infromation");
	printf("\nGrid       :%d", s1.grid);
	printf("\nPercentage :%f", s1.per);
	printf("\nAge        :%d", s1.age);
	printf("\nGrade      :%c", s1.grade);
	
	s2.grid = 102;	
	s2.per = 88.2;
	s2.age = 17;
	s2.grade = 'A';
	
	printf("\nStudent 2 infromation");
	printf("\nGrid       :%d", s2.grid);
	printf("\nPercentage :%f", s2.per);
	printf("\nAge        :%d", s2.age);
	printf("\nGrade      :%c", s2.grade);
	
	s3.grid = 103;	
	s3.per = 85.3;
	s3.age = 18;
	s3.grade = 'A';
	
	printf("\nStudent 3 infromation");
	printf("\nGrid       :%d", s3.grid);
	printf("\nPercentage :%f", s3.per);
	printf("\nAge        :%d", s3.age);
	printf("\nGrade      :%c", s3.grade);
	
	return 0;
}
