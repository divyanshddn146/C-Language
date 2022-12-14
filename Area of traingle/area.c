#include<stdio.h>
//This is the function used to find area of triangle
int triangle_area(int b, int h){
	int area;
	area=(b*h)/2;
	return area;


}

void main(){
	int b,h,a;
	printf("Enter the base of traingle:");
	scanf("%d",&b);				//Used to take base as input from user
	printf("Enter the height of traingle:");
        scanf("%d",&h);				//Used to take height as input from user
	a=triangle_area(b,h);				//In this expression we have called the function that we have defined above 
	printf("The area of traingle is %d\n",a);	//Finally Area of trangle will be printed as output 


}
