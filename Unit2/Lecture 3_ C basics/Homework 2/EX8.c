/*
 ============================================================================
 Name        : EX8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	char op=0;
	float n1=0,n2=0,res=0;

	printf("Enter the first number : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&n1);
	printf("Enter the second number number : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&n2);
	printf("choose the operation (+, -, *, /) : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&op);

	switch(op)
	{
	case '+':
		res=n1+n2;
		break;
	case '-':
		res=n1-n2;
		break;
	case'*':
		res=n1*n2;
		break;
	case'/':
		while(n2 == 0)
		{
			printf("Dividing by Zero!!, enter another number\n");
			printf("Enter the second number number : ");
			fflush(stdin); fflush(stdout);
			scanf("%f",&n2);
		}
		res=n1/n2;
		break;
	default:
		printf("wrong operation");

	}
	printf("%.2f %c %.2f = %.2f",n1,op,n2,res);

	return 0;
}
