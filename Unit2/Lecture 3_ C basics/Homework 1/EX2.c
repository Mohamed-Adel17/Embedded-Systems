/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
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
