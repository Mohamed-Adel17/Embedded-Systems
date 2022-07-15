/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#define MAX_SIZE 100
int main(void) {
	int num=0,i=0,location=0;
	float element=0,temp1=0,temp2=0;
	float arr[MAX_SIZE]={0};
	printf("Enter no. of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Element %d = ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&arr[i]);
	}
	printf("Enter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&element);

	printf("Enter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);

	for(i=location-1;i<num+1;i++)
	{
		if(i==location-1)
		{
			temp1=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=element;
		}else
		{
			temp2= arr[i+1];
			arr[i+1]=temp1;
			temp1=temp2;
		}
	}
	printf("\nThe new array : \n");
	for(i=0;i<num+1;i++)
	{
		printf("%.2f ",arr[i]);
	}



	return 0;
}
