#include<stdio.h>

int coprime(int x){

	int j,k;
	j=0;
	k=x;
	while(k){
		k=k/10;						//This loop is to get number of digits of number entered by user
		j++;

	}

	int rev_num,i,l;
	l=x;							//This loop will give us with reversed number
	rev_num=0;
	for(i=0;i<j;i++){
	rev_num=((rev_num*10)+(l%10));
	l=l/10;

	
	}



    	int m;							
	for(m=2;m<x&&m<rev_num;m++){				//For example if user entered 31 as input and 13 is reversed number, then loop will check for common factors till 13 is smallest number. Above 13 there will be no common factors between 13 and 31. 
		
		if(x%m==0 && rev_num%m==0)			//This condition will check whether there will be any value of m that will be a factor of both numbers and if it is then it will return 0(or returen false)
			 return 0;


	}

printf("The number %d and %d are coprime\n",x,rev_num);		//If condition is false then numbers are coprime and our output will be printed.



}

void main(){
int x;
printf("Enter any number:");
scanf("%d",&x);
coprime(x);
}
