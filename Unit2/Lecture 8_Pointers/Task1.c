/*
 ============================================================================
 Name        : Task1.c
 Author      : Mohamed Adel
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	
	int m=29,*ab=NULL;

	printf("Address of m : %p\n",&m);
	printf("Value of m : %d\n",m);

	ab = &m;
	printf("\nNow ab is assigned with the address of m\n");
	printf("Address in pointer ab : %p\n",ab);
	printf("Value inside pointer ab : %d\n",*ab);

	m = 34;
	printf("\nThe value of m assigned to 34 now\n");
	printf("Address in pointer ab : %p\n",ab);
	printf("Value inside pointer ab : %d\n",*ab);

	*ab = 7;
	printf("\nThe pointer variable ab is assigned with the value 7 now\n");
	printf("Address in pointer ab : %p\n",ab);
	printf("Value inside pointer ab : %d\n",*ab);



	return 0;
}
