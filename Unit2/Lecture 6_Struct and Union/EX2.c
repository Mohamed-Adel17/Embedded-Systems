/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : sum of two distances in (feet/inch) using structures
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
enum NUMdist_type{wrong,inch,feet};

struct Sdistance {
	float inch;
	float feet;
	enum NUMdist_type dist;
};


int main(void) {
	int i=0;
	char str[5]={0};
	float distance_feet=0;
	float distance_inch=0;
	struct Sdistance d[2]={0};

	for(i=0;i<2;i++)
	{
		while(d[i].dist == wrong)
		{
			printf("Enter distance %d type [inch/feet]: ",i+1);
			fflush(stdin); fflush(stdout);
			scanf("%s",str);

			if(!strcmp(str,"inch"))
				d[i].dist = inch;
			else if(!strcmp(str,"feet"))
				d[i].dist = feet;
			else
				printf("wrong distance type, try again! \n");
		}
		printf("Enter distance i+1 in %s : ",str);
		fflush(stdin); fflush(stdout);
		switch(d[i].dist)
		{
		case inch:
			scanf("%f",&d[i].inch); break;
		case feet:
			scanf("%f",&d[i].feet); break;
			default:
				break;

		}
	}

	if(d[0].dist == d[1].dist)
	{
		switch(d[i].dist)
		{
		case inch:
			distance_inch = d[0].inch + d[1].inch;  break;
		case feet:
			distance_feet = d[0].feet + d[1].feet; break;
		default:
			break;
		}
	}else if(d[0].dist < d[1].dist) //it means dist1 is inch, dist2 is feet
	{
		d[0].feet = d[0].inch / 12;  //conversion between inch and feet (ft = inch*12)
		distance_feet = d[0].feet + d[1].feet;

		d[1].inch = d[1].feet * 12;
		distance_inch = d[0].inch + d[1].inch;
	}else //dist1 is feet, dist2 is inch
	{
		d[0].inch = d[0].feet * 12;  //conversion between inch and feet (ft = inch*12)
		distance_inch = d[0].inch + d[1].inch;

		d[1].feet = d[1].inch / 12;
		distance_feet = d[0].feet + d[1].feet;
	}

	printf("sum of distances : \n in feet = %.2f\n in inch = %.2f",distance_feet,distance_inch);;

	return 0;
}
