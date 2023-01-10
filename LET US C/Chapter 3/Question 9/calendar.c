#include<stdio.h>

void main(){
	int n,d,y,x;
	printf("Enter the year:");
	scanf("%d",&y);
	int q=y/100;
	int w=y/400;
	if(y%4!=0){
		n=365*(y-1)+(1*(y/4)-q+w);
		d=n%7;
		if(d%7==0)
			printf("Monday\n");
		else if(d%7==1)
			printf("Tuesday\n");
		else if(d%7==2)    
                        printf("Wednesday\n");
		else if(d%7==3)    
                        printf("Thursday\n");
		else if(d%7==4)    
                        printf("Friday\n");
		else if(d%7==5)    
                        printf("Saturday\n");
		else if(d%7==6)    
                        printf("Sunday\n");	
	}


	else{
		n=365*(y-1)+(1*(y/4)-1-q+w);
		d=n%7;
                if(d%7==0)
                        printf("Monday\n"); 
                else if(d%7==1) 
                        printf("Tuesday\n");
                else if(d%7==2)
                       	printf("Wednesday\n");
               	else if(d%7==3)
                       	printf("Thursday\n");
               	else if(d%7==4)
                       	printf("Friday\n");
               	else if(d%7==5)
                       	printf("Saturday\n");
               	else if(d%7==6)
			printf("Sunday\n");
	}
	
	



}
