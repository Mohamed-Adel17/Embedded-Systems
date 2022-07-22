/*
 ============================================================================
 Name        : prime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : c function to print all prime numbers between two numbers
 ============================================================================
 */

#include <stdio.h>

void print_prime_numbers(int start, int end);
int main(void) {
	int start=0,end=0;
	printf("Enter the start of interval : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&start);

	printf("Enter the end of interval : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&end);

	print_prime_numbers(start,end);


	return 0;
}


void print_prime_numbers(int start, int end)
{
	int i=1,prime=0;
	printf("Prime numbers between %d and %d : \n",start,end);

	while(start<=end)
	{
		for(i=2;i<=(start/2);i++)
		{
			if(start%i!=0)
				prime=1;
			else
			{
				prime=0;
				break;
			}
		}
		if(prime==1 || start==2 || start==3)
			printf("%d ",start);
		start++;
	}

}
