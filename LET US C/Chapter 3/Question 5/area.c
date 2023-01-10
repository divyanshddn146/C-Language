#include<stdio.h>


void main(){
	int b,l,a,p;
	printf("Enter the length of rectangle:");
	scanf("%d",&l);
	printf("Enter the breath of rectangle:");
        scanf("%d",&b);
	a=l*b;
	p=2*(l+b);

	if(a>p)
		printf("The area of rectangle is greater than perimeter\n");
	else
		printf("The perimeter of triangle is greater than its area\n");







}
