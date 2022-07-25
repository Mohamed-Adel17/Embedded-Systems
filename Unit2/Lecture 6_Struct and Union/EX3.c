/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : add two complex numbers by passing structure to function
 ============================================================================
 */

#include <stdio.h>

struct Scomplex{
	float real;
	float img;
};

struct Scomplex sum_func(struct Scomplex num[]);
int main(void) {

	int i=0;
	struct Scomplex num[2]={0};
	for(i=0;i<2;i++)
	{
		printf("Enter %dth number real and imaginary respectively : \n",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f %f",&num[i].real,&num[i].img);
	}


		struct Scomplex res = sum_func(num);

		printf("sum = %.2f+%.2fi",res.real,res.img);

		return 0;
	}

	struct Scomplex sum_func(struct Scomplex num[])
	{
		struct Scomplex res;
		res.real = num[0].real + num[1].real;
		res.img = num[0].img + num[1].img;

		return res;
	}
