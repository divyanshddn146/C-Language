#include<stdio.h>

void main(){
	
	float x1,y1,x2,y2,x3,y3,a,b;

	printf("Enter the ocordinates x1 and y1:");
	scanf("%f %f",&x1,&y1);
	printf("Enter the ocordinates x1 and y1:");
        scanf("%f %f",&x2,&y2);
	printf("Enter the ocordinates x1 and y1:");
        scanf("%f %f",&x3,&y3);

	a=(y2-y1)/(x2-x1);
	b=(y3-y2)/(x3-x2);

	if(a==b)
		printf("Three points are collinear\n");
	else
		printf("the three are non-collinear\n");



}
