/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   :
 Description : Write C Program to Print a Integer Entered by a User
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
