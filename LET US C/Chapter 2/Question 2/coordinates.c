#include<stdio.h>
#include<math.h>
void main(){
	float x,y,s,r,t,phi,phi2;
	printf("Enter the coordinate x:");
	scanf("%f",&x);
	printf("Enter the coordinate y:");
        scanf("%f",&y);
	s=x*x+y*y;
	r=pow(s,0.5);
	t=y/x;
	phi=atan(t);
	phi2=(phi*180*7)/22;
	printf("Polar coordinates of (%.2f,%.2f) is (%.2f,%.2f)\n",x,y,r,phi2);





}
