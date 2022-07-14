/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Write C Program to Print a Integer Entered by a User
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {

	int x=0;
	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);
	printf("You entered : %d",x);

	return 0;
}
