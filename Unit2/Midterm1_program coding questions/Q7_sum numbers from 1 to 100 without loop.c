/*
 ============================================================================
 Name        : Q7_sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : c function to sum numbers from x to y (without loop)
 ============================================================================
 */

#include <stdio.h>

void print_sum(int start,int end);

int main(void) {
	int start=0,end=0;
	printf("Enter interval start : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&start);

	printf("Enter interval end : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&end);

	print_sum(start,end);

	return 0;
}

void print_sum(int start,int end)
{
	static int sum=0;

	sum+=start;
	if(start<end)
		print_sum(++start,end);
	else
		printf("sum = %d",sum);

}
