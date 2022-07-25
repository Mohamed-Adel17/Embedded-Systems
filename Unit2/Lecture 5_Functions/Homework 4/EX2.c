/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : calculate factorial using recursion
 ============================================================================
 */

#include <stdio.h>

int factorial(int num);

int main(void) {
	int num=0,fact=1;

	printf("Enter the value to get its factorial : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	fact=factorial(num);
	printf("Factorial of %d = %d",num,fact);

	return 0;
}


int factorial(int num)
{
	if(num>=1)
		return num*factorial(num-1);
	else
		return 1;
}


