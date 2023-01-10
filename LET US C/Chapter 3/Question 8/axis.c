#include<stdio.h>



void main(){
	int x,y;
	printf("Enter coordinate x:");
	scanf("%d",&x);
	printf("Enter coordinate y:");
	scanf("%d",&y);
	
	if(x==0)
		printf("Co-ordinate lies on Y axis\n");
	else if(y==0)
		printf("Co-ordinate lies on X axis\n");
	else if(x==0 && y==0)
		printf("Co-ordinate lies on origin\n");
	else
		printf("Co-ordinate lies on x-y axis\n");




}
