#include<stdio.h>
#include<math.h>
void main(){
	float l1,l2,g1,g2,a,b,pi;
	printf("Enter the value of latitude1:");
	scanf("%f",&l1);
	printf("Enter the value of latitude2:");
        scanf("%f",&l2);
	printf("Enter the value of longtude1:");
        scanf("%f",&g1);
	printf("Enter the value of longitude2:");
        scanf("%f",&g2);
	a=sin(l1/57.2957)*sin(l2/57.2957)+cos(l1/57.2957)*cos(l2/57.2957)*(cos((g2-g1)/57.2957));
	b=3963*acos(a);
	printf("The distance between these coordinates on earth in nautical miles is %.2f\n",b);










}
