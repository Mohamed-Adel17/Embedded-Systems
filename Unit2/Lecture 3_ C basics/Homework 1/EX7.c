/*
 ============================================================================
 Name        : EX7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Write Source Code to Swap Two Numbers without temp variable.
 ============================================================================
 */

#include <stdio.h>

//Write Source Code to Swap Two Numbers without temp variable.

int main(void) {

	float n1=0,n2=0;
	printf("Enter n1 value : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&n1);
	printf("Enter n2 value : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&n2);

	n1 = n1+n2;
	n2 = n1-n2;
	n1 = n1-n2;

	printf("After swapping, n1 = %.2f \n\t\tn2 = %.2f", n1,n2);






	return 0;
}


