/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Find ASCII Value of a Character
 ============================================================================
 */

#include <stdio.h>


int main(void) {

	char c = 0;
	printf("Enter your letter : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	printf("The ascii code of this letter is : %d",c);


	return 0;
}
