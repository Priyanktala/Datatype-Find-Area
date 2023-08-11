#include<stdio.h>
main()
/*
.
5. WAP to Simple interest.

*/

{
	float p,t,r,i;
	
	printf("Enter Principle Amount=");
	scanf("%f",&p);
	
	printf("Enter Time Duration=");
	scanf("%f",&t);
	
	printf("Enter Rate=");
	scanf("%f",&r);
	
	i=(p*t*r)/100;
	printf("Simple interest=%0.2f",i);
}