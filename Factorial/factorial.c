#include<stdio.h>

int factorial(int x){
int y;

	if(x==1){
		return 1;							//Seperate condition for 1
	}

	else{
		y=x*factorial(x-1);						//Condition for calculating factorial of any number other than 1 through recursion 
		

	}
	return y;

}






void main(){
	int x,z;
	printf("Enter any number:");
	scanf("%d",&x);
	z= factorial(x);

	printf("The factorial will be %d\n",z);
}
