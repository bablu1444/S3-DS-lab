#include <stdio.h>


int main()
{
int n;
printf("Enter number of employees");
scanf("%d",&n);


//structure declaration
struct emp
{
char name[20];
int empid;
float salary;
};
struct emp e1[100]; //structure initialisation


// scaning to structure elements

for(int i=0;i<n;i++)
{
printf("Enter Name \n");
scanf("%s",&e1[i].name);

printf("Enter Employee id\n");
scanf("%d",&e1[i].empid);

printf("Enter salary\n");
scanf("%f",&e1[i].salary);
}

// printing the employee details
for(int j=0;j<n;j++)
{	printf("Employee %d \n", j+1);
	printf("Name: %s\n",e1[j].name);
	printf("Employee ID: %d\n",e1[j].empid);
	printf("Salary: 5%f\n",e1[j].salary);
}


return 0;
}
//-------------------------------------------

