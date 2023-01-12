#include<stdio.h>
void main(){
int h,t;
float c;
printf("Enter the value of Hardness:");
scanf("%d",&h);
printf("Enter the value of Carbon content:");
scanf("%f",&c);
printf("Enter the value of Tensile strength:");
scanf("%d",&t);

if(h>50 && c<0.7 && t>5600)
	printf("Metal is of Grade 10\n");
else if(h>50 && c<0.7)
	printf("Metal is of Grade 9\n");
else if(c<0.7 && t>5600)
	printf("Metal is of Grade 8\n");
else if(h>50 && t>5600)
	printf("Metal is of Grade 7\n");
else if(h>50 || t>5600 || c<0.7)
	printf("Metal is of Grade 6\n");
else
	printf("Metal is of Grade 5\n");






}
