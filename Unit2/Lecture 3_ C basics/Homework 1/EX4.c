/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Multiply two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	float n1=0,n2=0;
	printf("Enter the first float num : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&n1);
	printf("Enter the second float num : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&n2);

	printf("The summation = %f",n1*n2);


	return 0;
}
