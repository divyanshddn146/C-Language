#include<stdio.h>

void main(){
int i,j,num,m,n;										//Intialise a m*n array
	printf("Enter the value of No. of rows:");
	scanf("%d",&m);	

	printf("Enter the value of No. of columns:");
        scanf("%d",&n);
	
	int a[m][n]; 
        
	for(i=1;i<=m;i++){
                for(j=1;j<=n;j++){							
                        printf("Enter the element a[%d][%d]",i,j);			//User will fill all the elements of array
                        scanf("%d",&a[i][j]);


                }


	
}
num=0;

	for(i=1;i<=m;i++){
                for(j=1;j<=n;j++){							//Condition to chech whether all elements in array is even or not
			if(a[i][j]%2==0)
				num++;




		}}


	printf("Total number of even numbers in this 2D array is %d\n",n);

}
