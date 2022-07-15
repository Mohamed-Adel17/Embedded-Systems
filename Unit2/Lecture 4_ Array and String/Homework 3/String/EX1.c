/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : find the frequency of a character in a string
 ============================================================================
 */

#include <stdio.h>
#define MAX_SIZE 30
int main(void) {
	char str[MAX_SIZE]={0};
	int freq=0,i=0;
	char ch=0;
	printf("Enter your string : ");
	fflush(stdin); fflush(stdout);
	gets(str);
	printf("Enter the character : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);

	for(i=0; str[i]!='\0';i++)
	{
		if(str[i] == ch)
			freq++;
	}
	printf("The character %c is repeated %d times",ch,freq);

	return 0;
}
