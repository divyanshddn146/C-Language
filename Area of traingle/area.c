#include<stdio.h>

int triangle_area(int b, int h){
	int area;
	area=(b*h)/2;
	return area;


}

void main(){
	int b,h,a;
	printf("Enter the base of traingle:");
	scanf("%d",&b);
	printf("Enter the height of traingle:");
        scanf("%d",&h);
	a=triangle_area(b,h);
	printf("The area of traingle is %d\n",a);


}
