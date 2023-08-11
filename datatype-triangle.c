#include<stdio.h>
main()
/*

4. WAP to Find area of triangle.

*/

{
	float b,h,area;
	
	printf("Enter base of triangle=");
	scanf("%f",&b);
	
	printf("Enter height of triangle=");
	scanf("%f",&h);
	
	area=(b*h)/2;
	printf("Area of triangle=%0.2f",area);
}