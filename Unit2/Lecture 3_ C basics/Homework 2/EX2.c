/*
 ============================================================================
 Name        : EX2.c

 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : check vowel or consonant
 ============================================================================
 */
#include <stdio.h>
int main(void) {
	char alpha=0,flag=0, i=0;
	for(i=0;i<2;i++)
	{
		printf("Enter the alphabet : ");
		fflush(stdin); fflush(stdout);
		scanf("%c",&alpha);
		switch(alpha)
		{
		case 'i' :
			flag=1; break;
		case 'a' :
			flag=1; break;
		case 'e' :
			flag=1; break;
		case 'o' :
			flag=1; break;
		case 'u' :
			flag=1; break;
		default:
			flag=0; break;
		}

		switch(flag)
		{
		case 1 :
			printf("%c is vowel\n",alpha); break;
		case 0 :
			printf("%c is consonant\n", alpha); break;
		}
	}

	return 0;
}
