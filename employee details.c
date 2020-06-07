#include<stdio.h>
#include<string.h>
struct employees{
int number;
char name[100],dept[100];
float salary;
};
int main()
{
    int i;
    struct employees e[10];
    printf("Enter details of 10 employees : \n");
    for(i=0;i<10;i++)
    {
        printf("\n\n %d.Employee : \n",i+1);
    printf("\n Enter the employee number : ");
    scanf("%d",&e[i].number);
    printf("\n Enter the name of the employee : ");
    scanf("%s",&e[i].name);
    printf("\n Enter the Department of the employee : ");
    scanf("%s",&e[i].dept);
    printf("\n Enter the salary of the employee in Dollar : ");
    scanf("%f",&e[i].salary);
    }
     printf(" \n\ndisplaying Employee details : \n");
     for(i=0;i<10;i++)
  {
    printf("\nEmployee %d",i+1);
    printf("\nNumber: %d",e[i].number);
    printf("\nName: %s",e[i].name);
    printf("\nDepartment: %s",e[i].dept);
    printf("\nsalary: %f",e[i].salary);

    printf("\n");
  }
}
