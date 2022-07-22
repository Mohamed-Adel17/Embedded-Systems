/*
 ============================================================================
 Name        : Q2_calculate.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : c function to take an integer number and calculate it's square root
 ============================================================================
 */

#include <stdio.h>

float square_root(int num);
int main(void) {
	int number=0,i=0;
	float sq_root =0.0;
	for(i=0;i<2;i++) //this loop to run two test cases
	{
		printf("Enter the number : ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&number);

		sq_root = square_root(number);

		printf("squared root of %d = %.3f\n",number,sq_root);
	}
	return 0;
}


//function to calculate root square of an integer number
float square_root(int num)
{
	int x=0,n=1,counter=0;

	float i=0,sq_root=0;
	while(1)
	{
		x=num-n;  //subtract odd numbers (starting from 1) from our number
		//until reaching zero or negative, number of iterations = nearest root to the number
		if(x>=0)
		{
			n+=2;
			counter++;
		}else
			break;
	}
	if(num - counter*counter !=0) //this means that our root is a float number
	{
		float d1=counter,d2=0,temp=0;

		//this loop to calculate first fraction digit
		for(i=0.1;(d2*d2)<num;i+=0.1)
		{
			temp=d2;
			d2=d1+i;
		}
		d2=temp;

		//this loop to calculate second fraction digit
		for(i=0.01;(d1*d1)<num;i+=0.01)
		{
			temp=d1;
			d1=d2+i;
		}
		d1=temp;

		//this loop to calculate third fraction digit
		for(i=0.001;(d2*d2)<num;i+=0.001)
		{
			temp=d2;
			d2=d1+i;
		}
		d2=temp;
		sq_root = d2;
	}else
		return counter;

	return sq_root; //returning squared root with rounding to 3 fraction digits
}
