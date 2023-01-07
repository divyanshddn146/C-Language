#include<stdio.h>

void main(){
int a,b;

printf("Enter the value of C:");
scanf("%d",&a);
printf("Enter the value of D:");
scanf("%d",&b);


a=a+b;
b=a-b;
a=a-b;
printf("The swapped values of C and D are  %d %d respectively\n",a,b);





}
