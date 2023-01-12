#include<stdio.h>

void main(){

	float bmi,h,w;
	printf("Enter your height(m):");
	scanf("%f",&h);
	printf("Enter your weight(w):");
	scanf("%f",&w);
	bmi=w/(h*h);
	if(bmi<15)
		printf("You fall under the category of Starvation\n");
	else if(bmi<17.5)
		printf("You fall under the category of Anorexic\n");
	else if(bmi<18.5)
		printf("You fall under the category of Underweight\n");
	else if(bmi<25)
		printf("You fall under the category of Ideal\n");
	else if(bmi<30)
		printf("You fall under the category of Overweight\n");
	else if(bmi<40)
		printf("You fall under the category of Obese\n");
	else
		printf("You fall under the category of Morbidly Obese\n");

}
