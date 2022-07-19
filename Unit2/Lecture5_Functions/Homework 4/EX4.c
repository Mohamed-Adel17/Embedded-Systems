/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate a given power to a given number using recursion
 ============================================================================
 */

#include <stdio.h>

int power_f(int num, int p);

int main(void) {

	int num=0,p=0;
	printf("Enter the number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("Enter the power : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&p);

	printf("Result of %d^%d = %d",num,p,power_f(num,p));





	return 0;
}

int power_f(int num,int p)
{
	if(p>0)
	{
		p--;
		return num*power_f(num,p);
	}else
	{
		return 1;
	}
}
