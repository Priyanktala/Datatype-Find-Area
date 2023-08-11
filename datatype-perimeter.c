#include<stdio.h>
main()
/*
.
6. WAP to Perimeter of circle.
*/

{
	float pi=3.14,r,p;
	
	printf("Enter Radius od Circle=");
	scanf("%f",&r);
	
	p=2*pi*r;
	printf("Perimeter of Circle=%0.2f",p);
}