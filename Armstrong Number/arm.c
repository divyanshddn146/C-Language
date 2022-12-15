#include<stdio.h>
#include<math.h>

void is_arm(int x){

	int i,y;
	i=0;
	y=x;
	while(y){
			y=y/10;				//This loop is used to get the number of digits of given number that is entered by user	
			i++;				//As if user enter number 453 then value of i will be 3	
							//This loop will end when while condition gets false or when value of y=0  
		
		}
	
	int n,r,sum,c;
	n=x;
	sum=0;
	while(n>0){					//In this loop r will get individual digit of number
	r=n%10;						//And then it power will be added to sum
	c=pow(r,i);					//If the value of sum is equal to number entered by user then is an armstrong number else not
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
