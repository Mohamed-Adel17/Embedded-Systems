/*
 ============================================================================
 Name        : EX6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	float n1=0,n2=0,temp=0;
	printf("Enter n1 value : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&n1);
	printf("Enter n2 value : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&n2);

	temp = n1;
	n1 = n2;
	n2 = temp;

	printf("After swapping, n1 = %.2f \n\t\tn2 = %.2f", n1,n2);


	return 0;
}
