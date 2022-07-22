/*
 ============================================================================
 Name        : Q6_find_unique_number_in_array_using_one_loop.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : c function to return unique number in array with one loop
 ============================================================================
 */

#include <stdio.h>
int* find_unique(int arr[]);

int length=0;
#define MAX_SIZE 20
int main(void) {

	int arr[MAX_SIZE]={0};
	int i=0;

	printf("Enter the array length : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&length);

	printf("Enter the array elements.... \n");
	fflush(stdin); fflush(stdout);
	for(i=0;i<length;i++)
	{
		printf("Enter the %dth element : ",i);
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr[i]);
	}

	int *unique_arr = find_unique(arr);
	printf("unique elements in this array = ");
	fflush(stdin); fflush(stdout);
	for(i=0;i<length;i++)
	{
		printf("%d, ",unique_arr[i]);
	}


	return 0;
}

int* find_unique(int arr[])
{
	static int index=0,k=0;
	static int unique_arr[MAX_SIZE]={0};
	int i=0,flag_unique=0;
	for(i=0;i<length;i++)
	{
		if(index==i)
			continue;
		if(arr[index]==arr[i])
		{
			flag_unique=0;
			break;
		}else
			flag_unique=1;
	}

	if(flag_unique==1)
	{
		unique_arr[k]=arr[index];
		k++;
	}

	index++;
	if(index != length)
	{
		find_unique(arr); //recursion case
	}else
	{
		length = k;
	}
	return unique_arr;
}
