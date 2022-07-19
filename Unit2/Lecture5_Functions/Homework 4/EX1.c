/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Function to get prime numbers in a given range
 ============================================================================
 */

#include <stdio.h>

void prime_numbers(int start,int end);



int main(void) {

	int start=0,end=0;

	printf("Enter start of interval : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&start);
	printf("Enter end of interval : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&end);

	prime_numbers(start,end);

	return 0;
}

void prime_numbers(int start,int end)
{
	int prime[end];
	int first = start;
	int prime_checked=0;
	int i=0,k=0;
	while(start<=end)
	{
		for(i=2;i<=start/2;i++)
		{
			if(start % i != 0)
				prime_checked=1;
			else
			{
				prime_checked=0;
				break;
			}
		}
		if(prime_checked == 1)
		{
			prime[k]=start;
			k++;
		}
		start++;
	}
	printf("Prime values between %d and %d : \n",first,end);
	for(i=0;i<k;i++)
	{
		printf("%d ",prime[i]);
	}
}



/*
 *
 ********another solution********
void *prime_numbers(int start,int end, int *n);

int prime[100];

int main(void) {

	int start=0,end=0,i=0,n=0;
	printf("Enter start of interval : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&start);
	printf("Enter end of interval : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&end);


	prime_numbers(start,end,&n);
	printf("Prime values between %d and %d : \n",start,end);
	for(i=0;i<n;i++)
	{
		printf("%d ",prime[i]);
	}

	return 0;
}


void *prime_numbers(int start,int end, int *n)
{

	int prime_checked=0;
	int i=0,k=0;
	*n=0;
	while(start<=end)
	{
		prime_checked=0;
		for(i=2;i<=start/2;i++)
		{
			if(start % i != 0)
				prime_checked=1;
			else
			{
				prime_checked=0;
				break;
			}
		}
		if(prime_checked == 1)
		{
			prime[k]=start;
			k++;
		}
		start++;
	}
	*n=k;
}
*
*
*/


