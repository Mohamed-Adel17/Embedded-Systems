/*
 ============================================================================
 Name        : Q5_number_of_ones_in_binary_number_given_in_decimal.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : c function to count number of ones in binary number
 ============================================================================
 */

#include <stdio.h>
int ones_counter(int num);
int main(void) {

	int num=0,i=0;
	for(i=0;i<2;i++)
	{
	printf("Enter the number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("number of ones in %d = %d\n",num,ones_counter(num));
	}


	return 0;
}


int ones_counter(int num)
{
	int counter=0;
	while(num!=0)
	{
		counter += num%2;
		num/=2;
	}
	return counter;
}
