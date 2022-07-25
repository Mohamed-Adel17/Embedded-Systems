/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : store information of student using structure
 ============================================================================
 */

#include <stdio.h>

struct Sstudent{
	char name[20];
	int roll;
	float marks;
};

int main(void) {


	struct Sstudent s1;
	printf("Enter name: ");
	fflush(stdin); fflush(stdout);
	scanf("%s",s1.name);

	printf("Enter roll number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&s1.roll);

	printf("Enter marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&s1.marks);


	printf(" name : %s\n roll number : %d\n marks : %.2f",s1.name,s1.roll,s1.marks);
	return 0;
}
