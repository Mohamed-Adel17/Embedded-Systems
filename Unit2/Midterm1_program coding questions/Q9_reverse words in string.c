/*
 ============================================================================
 Name        : Q9_reverse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : c function to reverse words in string
 ============================================================================
 */

#include <stdio.h>
#include "string.h"
#define MAX_COLS 20
#define MAX_ROWS 5

void reverse_words(char str[MAX_ROWS][MAX_COLS]);
char *temp_ptr[MAX_ROWS]={0};

int main(void) {

	char str[MAX_ROWS][MAX_COLS]={0};
	int i=0,rows=0;

	printf("Enter number of strings : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&rows);
	printf("Enter strings : \n");
	for(i=0;i<rows;i++)
	{
		fflush(stdin); fflush(stdout);
		gets(str[i]);

	}

	reverse_words(str);

	printf("\nAfter reversing : \n");
	for(i=0;i<rows;i++)
	{
		printf("%s ", temp_ptr[i]);
	}

	return 0;
}
void reverse_words(char str[MAX_ROWS][MAX_COLS])
{
	int i=0,rows=0,rw=0;

	for(i=0;*str[i]!=0;i++)
		rows++;

	rw=rows;

	for(i=0;i<rows;i++)
	{
		temp_ptr[rw-1] = str[i];
		rw--;
	}
}
