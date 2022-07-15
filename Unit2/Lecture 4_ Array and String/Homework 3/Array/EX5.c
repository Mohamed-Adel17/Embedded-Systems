/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#define MAX_SIZE 50
int main(void) {
	float arr[MAX_SIZE];
	float element=0;
	int not_founded = 0;
	int index=0,i=0,num=0;

	printf("Enter no. of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Element %d = ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&arr[i]);
	}
	do
	{
		not_founded=0;
		printf("Enter the element to be searched : ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&element);
		index=5502; 	//any value just to check that element was founded or not
		for(i=0;i<num;i++)
		{
			if(arr[i]==element)
			{
				index=i;
				break;
			}
		}
		if(index == 5502)
		{
			printf("sorry, element not found!, try again..\n\n");
			not_founded=1;
		}
		else
			printf("Your element location is : %d",index+1);

	}while(not_founded == 1);


	return 0;
}
