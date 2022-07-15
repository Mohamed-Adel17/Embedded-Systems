/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : find the length of a given string
 ============================================================================
 */

#include <stdio.h>
#define MAX_SIZE 50
int main(void) {
	int len=0,i=0;
	char str[MAX_SIZE]={0};
	printf("Enter your string : ");
	fflush(stdin); fflush(stdout);
	gets(str);

	for(i=0;str[i]!=0;i++)
	{
		len++;
	}
	printf("Length of your string = %d",len);



	return 0;
}
