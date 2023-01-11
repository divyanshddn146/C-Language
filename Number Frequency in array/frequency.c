#include<stdio.h>

void main(){
int i,j,count,n;
printf("Enter the size of array:");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
	printf("Enter any positive number a[%d]:",i);
	scanf("%d",&a[i]);
	if(a[i]<0)
		i--;	
}
for(i=0;i<n;i++){
	int count=1;
	if(a[i]>=0){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				count=count+1;
				a[j]=-1;
			}		
		}
	
	printf("The frequency of number %d is %d\n",a[i],count);
	}
}
}
