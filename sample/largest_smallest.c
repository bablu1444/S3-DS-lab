#include <stdio.h>


int main()
{
int a[50],i,n,large,small;
printf("How many elements");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	
large=small=a[0];
for(i=1;i<n;i++)
	{
	if(a[i]>large)
	large=a[i];
	if(a[i]<small)
	small=a[i];
	}

printf("Largest number is %d \nsmallest number is %d \n \nEnd of program\n", large,small);
return 0;
}

