/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : find the largest number among three numbers
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int n1=0,n2=0,n3=0;

	printf("Enter the first number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n1);
	printf("Enter the first number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n2);
	printf("Enter the first number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n3);
	if(n1>n2)
	{
		if(n1>n3)
			printf("The largest number is %d",n1);
		else
			printf("The largest number is %d",n3);
	}
	else if(n2>n1)
	{
		if(n2>n3)
			printf("The largest number is %d",n2);
		else
			printf("The largest number is %d",n3);
	}


	return 0;
}
