/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : check whether a number is odd or even
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int num =0, i=0;

	for(i=0;i<2;i++)
	{
		printf("Enter the number : ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&num);

		if(num % 2 == 0)
			printf("%d is even\n",num);
		else
			printf("%d is odd\n",num);

	}
	return 0;
}
