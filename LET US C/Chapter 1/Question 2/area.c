#include<stdio.h>
#define PI 3.14
void main(){
	float l,b,r,a,A,p,c;
	printf("Enter the length of rectangle:");
	scanf("%f",&l);
	printf("Enter the breath of rectangle:");
	scanf("%f",&b);
	printf("Enter the radius of circle:");
        scanf("%f",&r);
	p=2*(l+b);
	a=l*b;
	c=2*PI*r;
	A=PI*r*r;
	printf("\nThe perimeter of rectangle is %.3f\n\n",p);
	printf("The area of rectangle is %.3f\n\n",a);
	printf("The circumference of circle is %.3f\n\n",c);
	printf("The area of circle is %.3f\n",A);




}
