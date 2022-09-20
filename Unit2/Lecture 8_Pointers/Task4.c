/*
 ============================================================================
 Name        : Task4.c
 Author      : Mohamed Adel
 Task        : Write a program in C to print the elements of an array in reverse order.
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int arr[100]={0},num=0;
	int *ptr=arr;
	char i=0;
	printf("Input the number of elements to store in the array (max 100) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Enter Element %d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",ptr+i);
	}
	printf("\nReverse of the array : \n");
	for(i=i-1;i>=0;i--)
	{
		printf("Element %d : %d\n",i+1, *(ptr+i));
		fflush(stdin); fflush(stdout);
	}
}
