#include<stdio.h>
main()
/*
 1. WAP to Find area of circle.

*/

{
	float pi=3.14,r,area;
	
	printf("Enter Radius of Circle=");
	scanf("%f",&r);
	
	area=pi*r*r;
	printf("Area of Circle=%0.2f",area);
}