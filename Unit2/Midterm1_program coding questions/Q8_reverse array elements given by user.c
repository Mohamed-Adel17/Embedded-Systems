/*
 ============================================================================
 Name        : Q8_reverse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : c function to take an array and revers its elements
 ============================================================================
 */

#include <stdio.h>
#define MAX_SIZE 30
void reverse_array(int arr[],int length);
int main(void) {
	int i=0,length;
	int arr[MAX_SIZE]={0};

	printf("Enter array length : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&length);
	printf("Enter array elements : \n");
	fflush(stdin); fflush(stdout);
	for(i=0;i<length;i++)
	{
		scanf("%d",&arr[i]);
	}

	reverse_array(arr,length);

	printf("array after reverse: \n");
	fflush(stdin); fflush(stdout);
	for(i=0;i<length;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}

void reverse_array(int arr[],int length)
{
	int temp_arr[MAX_SIZE]={0};
	int i=0;
	int len = length;

	for(i=0;i<length;i++)
	{
		temp_arr[len-1]=arr[i];
		len--;
	}

	for(i=0;i<length;i++)
	{
		arr[i]=temp_arr[i];
	}
}
