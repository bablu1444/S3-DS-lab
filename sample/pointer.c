#include <stdio.h>

int main()
{
//program to find sum of elements in array using pointers

int n,arr[100],sum=0;
printf("Enter number of elements");
scanf("%d", &n);

//inputting array

for(int i=0;i<n;i++)

	scanf("%d",arr[i]);
	
	
//finding the sum
for(int i=0;i<n;i++)
	sum+=arr[i];

//printing the sum
printf("sum is %d", sum);

return 0;
}
