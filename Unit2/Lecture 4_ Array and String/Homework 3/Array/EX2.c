/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : average of array elements and size of array given by user
 ============================================================================
 */

#include <stdio.h>
#define MAX_SIZE 100

int main(void) {

	float arr[MAX_SIZE];
	int n=0,i=0;
	float sum=0,avg=0;
	printf("Enter the array size : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter element %d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	avg=sum/n;
	printf("Average = %.2f",avg);

	return 0;
}
