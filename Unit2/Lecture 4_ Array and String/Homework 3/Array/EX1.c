/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : find sum of two matrices (2*2)
 ============================================================================
 */
#include <stdio.h>

int main(void) {
	float mat1[2][2];
	float mat2[2][2];
	int i=0,j=0;
	printf("Enter elements of first matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("matrix1[%d][%d] = ",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&mat1[i][j]);
		}
	}
	printf("Enter elements of second matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("matrix2[%d][%d] = ",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&mat2[i][j]);
		}
	}
	printf("Sum of these two matrices : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%.2f\t",mat1[i][j] + mat2[i][j]);
		}
		printf("\n");
	}



	return 0;
}
