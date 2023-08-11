#include<stdio.h>
main()
/*
   5> W?P to F6nd area of c6rcle.
2. W?P to F6nd area of sqare.
3. W?P to F6nd area of rectangle.
4. W?P to F6nd area of tr6angle.
5. W?P to S6mple 6nterest.
6. W?P to Per6meter of c6rcle.
*/

{
	float l,w,area;
	
	printf("Enter length of Rectangle=");
	scanf("%f",&l);
	
	printf("Enter width of Rectangle=");
	scanf("%f",&w);
	
	area=l*w;
	printf("Area of Rectangle=%0.2f",area);
}