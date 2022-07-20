/*
 ============================================================================
 Name        : swap.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : swap two given arrays with given different lengths
 ============================================================================
 */

#include <stdio.h>

#define MAX_SIZE 100
int main(void) {
	int len_A=0, temp_len=0, len_B=0, i=0;
	int *new_A=NULL,*new_B=NULL;

	int A[MAX_SIZE],B[MAX_SIZE];

	printf("Enter length of array A : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&len_A);

	printf("Enter array A : \n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<len_A;i++)
	{
		scanf("%d",&A[i]);
	}

	printf("Enter length of array B : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&len_B);

	printf("Enter array B : \n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<len_B;i++)
	{
		scanf("%d",&B[i]);
	}

	//swapping arrays
	new_A=B;
	new_B=A;

	//swapping lengths
	temp_len=len_A;
	len_A=len_B;
	len_B=temp_len;

	printf("After swapping,\nArray A = {");
	for(i=0;i<len_A;i++)
	{
		printf("%d, ",new_A[i]);
	}
	printf("}\nArray B = {");

	for(i=0;i<len_B;i++)
	{
		printf("%d, ",new_B[i]);
	}
	printf("}");


	return 0;
}
