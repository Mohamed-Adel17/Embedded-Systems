/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : find transpose of a matrix, size defined by user
 ============================================================================
 */

#include <stdio.h>
#define MAX_COLS 50
#define MAX_ROWS 50

int main(void) {
	int rows=0,cols=0;
	int i=0,j=0;
	float mat[MAX_ROWS][MAX_COLS];
	float mat_trans[MAX_ROWS][MAX_COLS];

	printf("Enter no. of rows : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&rows);
	printf("Enter no. of columns : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&cols);


	printf("Enter elements of matrix : \n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("matrix[%d][%d] = ",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&mat[i][j]);
			mat_trans[j][i]=mat[i][j];
		}
	}
	printf("\nThe entered matrix : \n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%.2f\t",mat[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose of this matrix : \n");
	for(i=0;i<cols;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("%.2f\t",mat_trans[i][j]);
		}
		printf("\n");
	}



	return 0;
}
