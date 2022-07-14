/*
 ============================================================================
 Name        : EX6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {

	int num=0,i=0,sum=0;
	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	for(i=0;i<=num;i++)
	{
		sum+=i;
	}
	printf("sum = %d",sum);

	return 0;
}
