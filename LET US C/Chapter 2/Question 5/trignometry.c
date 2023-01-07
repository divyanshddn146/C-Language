#include<stdio.h>
#include<math.h>


void main(){
	int a;
	float b,r,c,d,e,f,g;

	printf("Enter the angle(in degrees):");
	scanf("%d",&a);
	
	r=(a*3.14)/180;
	b=sin(r);
	c=cos(r);
	d=tan(r);
	e=1/b;
	f=1/c;
	g=1/d;

	printf("The value of sin(%d) is %.2f\n",a,b);
	printf("The value of cos(%d) is %.2f\n",a,c);
	printf("The value of tan(%d) is %.2f\n",a,d);
	printf("The value of cosec(%d) is %.2f\n",a,e);
	printf("The value of sec(%d) is %.2f\n",a,f);
	printf("The value of cot(%d) is %.2f\n",a,g);







}
