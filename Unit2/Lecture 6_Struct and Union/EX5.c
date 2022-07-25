/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : calculate circle area using function like macro
 ============================================================================
 */

#include <stdio.h>

#define PI 3.14
#define circle_area(R) (PI*R*R)
int main(void) {

	float radius=0,area=0;
	printf("Enter radius : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&radius);

	area = circle_area(radius);

	printf("area = %.2f",area);

	return 0;
}
