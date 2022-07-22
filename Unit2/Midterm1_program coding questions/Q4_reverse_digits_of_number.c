/*
 ============================================================================
 Name        : reverse_digits_of_number.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

#define MAX_SIZE 12

char r_num[MAX_SIZE]={0};
void reverse_digits(char num[]);
int main(void) {

	char num[MAX_SIZE]={0};

	printf("Enter the number : ");
	fflush(stdin); fflush(stdout);
	scanf("%s",num);

	reverse_digits(num);
	printf("reversed number = %s",r_num);

	return 0;
}

void reverse_digits(char num[])
{
	int i=0;
	int size=0;

	while(num[size]!=0)
	{
		size++;
	}

	int k=0;
	while(num[k]!=0)
	{
		if(num[size-1]>='0' && num[size-1]<='9')
		{
			r_num[i]=num[size-1];
			i++;
		}
		k++;
		size--;
	}
}
