#include<stdio.h>


void main(){
	int x;
	printf("Enter any number:");
	scanf("%d",&x);

	if(x<0)
		printf("Absolute value of %d is %d\n",x,-1*x);
	else
		printf("Absolute value of %d is %d\n",x,x);







}
