/*
 ============================================================================
 Name        : Task3.c
 Author      : Mohamed Adel
 Task        : Write a program in C to print a string in reverse using a pointer
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char str[20]={0};
	char *ptr=str;
	char i=0,j=0;
	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	scanf("%s",ptr);
	/*Get the string Length*/
	while(*(ptr+i) != 0)
	{
		i++;
	}
	printf("Reverse of the string : ");
	fflush(stdin); fflush(stdout);
	for(j=i-1 ;j>=0; j--)
	{
		printf("%c",*(ptr+j));
	}
}
