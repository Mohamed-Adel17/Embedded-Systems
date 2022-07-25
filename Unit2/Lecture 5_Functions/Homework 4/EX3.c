/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : write a function to reverse a sentence using recursion
 ============================================================================
 */

#include <stdio.h>

char * reverse_func(char sentence[],int size);
#define MAX_SIZE 100
int main(void) {


	char sentence[MAX_SIZE];
	int size=0;

	printf("Enter the sentence to be reversed : ");
	fflush(stdin); fflush(stdout);
	gets(sentence);

	for(;sentence[size]!=0;size++);


	char* rev_arr = reverse_func(sentence,size);

	printf("The reversed sentence 		  : %s",rev_arr);



	return 0;
}
char * reverse_func(char sentence[],int size)
{

	static char new_sentence[MAX_SIZE];
	static int i;
	new_sentence[i]=sentence[size-1];
	size--; i++;
	if(size!=0)
	{
		reverse_func(sentence,size);
	}else
	{
		new_sentence[i]='\0';
		return new_sentence;
	}

	return new_sentence;

}
