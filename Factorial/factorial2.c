#include<stdio.h>


void factorial(int x){
	int fact,i;
	if(x>1){					
	fact=1;
	for(i=x;i>1;i-=2){
		fact=fact*i*(i-1);						//Condition for factorial
	}
	
	printf("The factorial of %d is %d\n",x,fact);
	
	}

	if(x==1){
	
	printf("The factorial of 1 is 1 only\n");				//Seperate condition for value equal to 1 as when value is 1 then its factorialis also 1
	
	}







}




void main(){

	int x;
	printf("Enter any number:");
	scanf("%d",&x);
	
	factorial(x);


}


