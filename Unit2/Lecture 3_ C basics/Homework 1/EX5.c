/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
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
