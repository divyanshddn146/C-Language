#include<stdio.h>

void main(){
	int r,s,a;
	printf("Enter the age of Ram:");
	scanf("%f",&r);
	printf("Enter the age of Shyam:");
        scanf("%f",&s);
	printf("Enter the age of Ajay:");
        scanf("%f",&a);

	if(r<s && r<a){
		printf("Ram is youngest of three\n");
	
	}
	else if(s<r && s<a){
		printf("Shyam is youngest of three\n");}

	else
		printf("Ajay is youngest of three\n");









}
