/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : check whether a number is positive or negative
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int n1=0,i=0;
	for(i=0;i<3;i++)
	{
		printf("Enter the first number : ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&n1);

		if(n1>0)
			printf("%d is positive", n1);
		else if(n1<0)
			printf("%d is negative",n1);
		else
			printf("You entered zero");

		printf("\n");
	}


	return 0;
}

