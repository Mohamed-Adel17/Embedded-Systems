/*
 ============================================================================
 Name        : Q10_count.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : c function to count the max number of ones between two zeros
 ============================================================================
 */

#include <stdio.h>
int max_ones(int num);
#define MAX_BITS 16
int main(void) {

	int num=0,i=0;

	for(i=0;i<2;i++)
	{
		printf("Enter the number : ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&num);

		printf("max ones between two zeros = %d\n",max_ones(num));
	}
	return 0;

}
int max_ones(int num)
{
	int n=0,max=0,counter=0,j=0;
	int i=0;
	int bits[MAX_BITS]={0};


	//converting decimal to binary..
	while(num!=0)
	{
		bits[i]=num%2+'0';
		num/=2;
		i++;
	}

	bits[i]='\0'; //null terminator to end string


	//calculating number of ones between two zeros
	while(bits[n]!=0)
	{
		if(bits[n]=='0')
		{
			for(j=n;bits[j+1]=='1';j++)
				counter++;

			if(max<counter)
				max=counter;
		}

		n++;
		counter=0;
	}
	return max;
}
