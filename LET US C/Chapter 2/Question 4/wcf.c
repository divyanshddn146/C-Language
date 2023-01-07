#include<stdio.h>
#include<math.h>

void main(){
	
	float wcf,t,v;
	printf("Enter the wind temperature:");
	scanf("%f",&t);
	printf("Enter the wind velocity:");
        scanf("%f",&v);

	wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
	printf("The wind chill factor is %f\n",wcf);
	





}
