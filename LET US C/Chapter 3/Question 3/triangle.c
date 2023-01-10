#include<stdio.h>

void main(){

	float a,b,c;
	float sum;
	printf("Enter first angle of triangle:");
	scanf("%f",&a);
	printf("Enter second angle of triangle:");
        scanf("%f",&b);
	printf("Enter third angle of triangle:");
        scanf("%f",&c);
	
	sum=a+b+c;

	if(sum==180)
		printf("the angles sum upto 180 degrees so, triangle is valid\n");
	else
		printf("Triangle is not valid\n");





}
