/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : check whether a character is alphabet or not
 ============================================================================
 */

#include <stdio.h>


int main(void) {

	char c=0,i=0;

	for(i=0;i<2;i++)
	{
		printf("Enter the character : ");
		fflush(stdin); fflush(stdout);
		scanf("%c",&c);

		if(((c >= 65)&&(c <=90))||((c >= 97)&&(c <=122)))
			printf("%c is an alphabet",c);
		else
			printf("%c is not an alphabet",c);

		printf("\n");
	}

	return 0;
}
