/*
 ============================================================================
 Name        : Task2.c
 Author      : Mohamed Adel
 Task        : Write a program in C to print all the alphabets using a pointer.
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char ch = 'A';
	char *ptr = &ch;
	for(;*ptr <= 'Z';(*ptr)++)
	{
		printf("%c ",*ptr);
	}
}
