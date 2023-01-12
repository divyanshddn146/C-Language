#include<stdio.h>

float max(float x, float y,float z){

	if(x>y && x>z)
		return x;
	else if(y>z && y>x)
		return y;
	else
		return z;
}

void main(){
	float r,g,b;
	float k,R,G,B,c,m,y;
	printf("Enter the value of red color:");
	scanf("%f",&r);
	printf("Enter the value of green color:");
        scanf("%f",&g);
	printf("Enter the value of blue color:");
        scanf("%f",&b);
	R=r/255;
	G=g/255;
	B=b/255;
	k=1-max(R,G,B);
	c=(1-R-k)/(1-k);
	m=(1-G-k)/(1-k);
	y=(1-B-k)/(1-k);

	printf("The CMY(Cyan,Magneta,Yellow) value of RGB color (%.0f,%.0f,%.0f) is (%.2f,%.2f,%.2f)\n",r,g,b,c*100,m*100,y*100);


		






}
