/*
 * main.c

 *
 *  Created on: Jul 14, 2022
 *      Author: Mohamed Adel
 */

#include <stdio.h>

int main(void)
{
	int n1=0,n2=0;

	printf("Enter the first integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n1);
	printf("Enter the second integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n2);

	printf("The summation = %d",n1+n2);


	return 0;
}
