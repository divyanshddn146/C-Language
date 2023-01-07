#include<stdio.h>

void main(){
	int sum,b,n,a,i;
	printf("Enter any number:");
	scanf("%d",&n);
	b=n;
	sum=0;
	while(b>0){
		a=b%10;
		sum=sum+a;
		b=b/10;
	}

	printf("The sum of digits of number %d is %d\n",n,sum);



}
