/*
 ============================================================================
 Name        : convert.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : convert decimal in ascii into unsigned integer
 ============================================================================
 */

#include <stdio.h>

unsigned int dec_ascii_TO_u_int(char dec_ascii[]);
int main(void) {

	char dec_ascii[425];
	unsigned int res=0;

	printf("Enter your decimal number : ");
	fflush(stdin); fflush(stdout);
	scanf("%s",dec_ascii);

	res = dec_ascii_TO_u_int(dec_ascii);

	printf("Unsigned integer of %s = %u",dec_ascii,res);



	return 0;
}

unsigned int dec_ascii_TO_u_int(char dec_ascii[])
{
	unsigned int result=0;
	if(dec_ascii[2]!='\0')
	{
		result =(dec_ascii[0]-'0')*100;
		result+=(dec_ascii[1]-'0')*10;
		result+=(dec_ascii[2]-'0');
	}else if(dec_ascii[1]!='\0')
	{
		result=(dec_ascii[0]-'0')*10;
		result+=(dec_ascii[1]-'0');
	}else
	{
		result=(dec_ascii[0]-'0');
	}

	return result;

}
