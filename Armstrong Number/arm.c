#include<stdio.h>
#include<math.h>

void is_arm(int x){

	int i,y;
	i=0;
	y=x;
	while(y){
			y=y/10;
			i++;

		
		}
	
	int n,r,sum,c;
	n=x;
	sum=0;
	while(n>0){
	r=n%10;
	c=pow(r,i);
	sum=sum+c;
	n=n/10;
	}
	if(sum==x)
		printf("The given number is an Armstrong number\n");
	else
		printf("The given number is not an Armstrong number\n");
	
}






void main(){
int x;
printf("Enter any number:");
scanf("%d",&x);
is_arm(x);
}
