/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

struct Sstudent{
	char name[20];
	int roll;
	float marks;
};

int main(void) {

	int i=0;
	struct Sstudent std[10];
	for(i=0;i<10;i++)
	{
		printf("for %dth student.. \n",i+1);
		printf("Enter name: ");
		fflush(stdin); fflush(stdout);
		scanf("%s",std[i].name);

		printf("Enter roll number: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&std[i].roll);

		printf("Enter marks: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&std[i].marks);
	}



	for(i=0;i<10;i++)
	{
		printf("%dth student.. \n",i+1);
		printf(" name : %s\n roll number : %d\n marks : %.2f\n",std[i].name,std[i].roll,std[i].marks);
	}


	;
	return 0;
}
