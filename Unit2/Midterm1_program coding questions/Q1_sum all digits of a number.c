/*
 ============================================================================
 Name        : Q1_sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : c function to take a number and sum all digits
 ============================================================================
 */

#include <stdio.h>
int sum_num(char num[]);

int main(void) {
	int i=0;
	char sum[10]={0};
	for(i=0;i<2;i++)
	{
		printf("Enter the number : ");
		fflush(stdin); fflush(stdout);
		scanf("%s",sum);

		printf("sum of digits = %d\n",sum_num(sum));
	}

	return 0;
}
int sum_num(char num[])
{
	int sum=0,i=0;
	for(i=0;num[i]!='\0';i++)
	{

		sum+=num[i]-'0';
	}
	return sum;
}
