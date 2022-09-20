/*
 ============================================================================
 Name        : Task5.c
 Author      : Mohamed Adel
 Task        : Write a program in C to show a pointer to an array which contents are pointer to structure.
 ============================================================================
 */

#include <stdio.h>


typedef struct{
	char name[20];
	int id;

}employee_t;

int main(void) {
	int i=0;
	employee_t emp[2]={{"Ahmed",10},{"Omar",20}};
	employee_t *ptrArr[2];
	ptrArr[0]=&emp[0];
	ptrArr[1]=&emp[1];

	for(i=0;i<2;i++)
	{
		printf("Employee %d name : %s\nEmployee %d id : %d\n\n",i+1,ptrArr[i]->name,i+1,ptrArr[i]->id);
	}

}
