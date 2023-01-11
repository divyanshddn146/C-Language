#include<stdio.h>
#include<math.h>

void main(){

int a,b,c;
printf("Enter the length l1 of triangle:");
scanf("%d",&a);
printf("Enter the length l2 of triangle:");
scanf("%d",&b);
printf("Enter the length l3 of triangle:");
scanf("%d",&c);



if(a>b && a>c){
	if(a==sqrt(b*b+c*c))
		printf("This is a Right-Angled triangle\n");}
else if(b>a && b>c){
        if(b==sqrt(a*a+c*c))
	printf("This is a Right-Angled triangle\n");}
else if(c>a && c>b){
	if(c==sqrt(a*a+b*b))
		printf("This is a Right-Angled triangle\n");}
else if(a!=b && b!=c && c!=a)
	printf("This is a saclene triangle\n");
else if(a==b && b==c && c==a)
	printf("This is an equilateral triangle\n");

else 
	printf("This is an isoceles triangle\n");







}
