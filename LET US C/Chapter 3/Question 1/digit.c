#include<stdio.h>
#include<math.h>




void main(){
int n,y,x,i,j,l;

printf("Enter the number:");
scanf("%d",&n);
x=n;
static int z;
z=n;
while(x>0){
	x=x/10;	
	y++;
}
int sum=0;
int g;
for(j=y-1;j>-1;j--){
	g=n%10;
	l=pow(10,j);
	sum=sum+g*l;
	n=n/10;


}

printf("The reversed digit is %d\n",sum);

if(sum==z)
	printf("The entered string and reversed string are same\n");
else
	printf("The entered string and reversed string are different\n");


}
