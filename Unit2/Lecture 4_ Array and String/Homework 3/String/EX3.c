/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : reverse string without using string library
 ============================================================================
 */

#include <stdio.h>
#define MAX_SIZE 50
int main(void) {
	int len=0,i=0;
	char str[MAX_SIZE]={0};
	char new_str[MAX_SIZE]={0};
	printf("Enter your string : ");
	fflush(stdin); fflush(stdout);
	gets(str);
	for(i=0;str[i]!=0;i++)
	{
		len++;
	}

	for(i=0;str[i]!=0;i++)
	{
		new_str[len-1]=str[i];
		len--;
	}

	printf("Your string is : %s\nReversed one   : %s",str,new_str);






	return 0;
}
