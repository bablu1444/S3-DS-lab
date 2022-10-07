#include <stdio.h>


int main()
{
int a[20][20],b[20][20],sum[20][20],product[20][20],i,j,m1,m2,n1,n2;
printf("Enter the order of matrix \n Enter the number of rows of first matrix");
scanf("%d",&m1);
printf("Enter the number of columns of first matrix");
scanf("%d",&n1);
printf("Enter the number of rows of Second matrix\n");
scanf("%d",&m2);
printf("Enter the number of columns of Second matrix");
scanf("%d",&n2);

if (n1==m2)
{
printf("Enter the elements of first matrix\n");

	for(i=0;i<m1;i++)
		for(j=0;j<n1;j++)
		//printf("Enter element %d , %d");
		scanf("%d", &a[i][j]);
		

printf("Enter the elements of second matrix\n");
	for(i=0;i<m2;i++)
		for(j=0;j<n2;j++)
		//printf("Enter element %d , %d");
		scanf("%d", &b[i][j]);
		
//-------------------------------------------------------------------------

//adding matrices
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		 
		 sum[i][j]=a[i][j]+b[i][j];
		 
//finding product
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		 
		 
		 //product[i][j]=1;
		 for(int k=0;k<n;k++)
		 
		 product[i][j]+= a[i][k]*b[k][j];
		 
		 
//displaying sum 


printf("sum is:");
	for(i=0;i<m;i++)
	{ printf("\n");
		for(j=0;j<n;j++)
		printf("%d  ",sum[i][j]);
	}
	printf("\n");	

//displaying product
printf("Product is:");
	for(i=0;i<m;i++)
	{ printf("\n");
		for(j=0;j<n;j++)
		printf("%d  ",product[i][j]);
	}	
printf("\n");

}

else
printf("Not possible for multiplication");

 printf("Program exitted at end\n");
return 0;
}
