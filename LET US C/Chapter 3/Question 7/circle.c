#include<stdio.h>
#include<math.h>
void main(){
	float x1,y1,x2,y2,r,a,s;
	printf("Enter the coordinate x and y of centre of circle:");
	scanf("%f %f",&x1,&y1);
	printf("Enter the points to be cecked:");
        scanf("%f %f",&x2,&y2);
	printf("Enter the radius of circle:");
        scanf("%f",&r);
	a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	s=sqrt(a);

	if(r==s)
		printf("Point is on the circle\n");
	if(r>s)
		printf("Point is inside the circle\n");
	if(r<s)
		printf("Point is outside of circle\n");

}
