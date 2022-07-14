/*
 ============================================================================
 Name        : EX7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int factorial(int num)
{
	int fact=1;

	if((num==0)||(num==1))
		return 1;

	while(num!=0)
	{
		fact = fact * num;
		num--;
	}
	return fact;
}

int main(void) {
	int num=0,Fact=0;
	printf("Enter a number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	Fact = factorial(num);
	printf("Factorial of this number is %d",Fact);

	return 0;
}

