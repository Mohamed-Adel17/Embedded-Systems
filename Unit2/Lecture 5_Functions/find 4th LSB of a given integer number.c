/*

 ============================================================================
 Name        : Find 4th LSB of a given integer number.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Find 4th LSB of a given integer number
 ============================================================================
*/

#include <stdio.h>

int main(void){
	int i=31,k=0,x=0;
	int bits[32]={0};
	char binary_eq[32]={0};

	printf("Enter the integer number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	while(x!=0)
	{
		bits[i]=x%2;
		x/=2;
		i--;
	}
	int size = 31-i;
	for(k=0;k<size;k++)
	{
		binary_eq[k]= bits[i+1]+'0';

		i++;
	}

	binary_eq[k]='\0';
	// to get the 4th least significant bit --> index = 28
	printf("4th least significant bit of (0%s) = %d",binary_eq,bits[28]);


	return 0;
}
