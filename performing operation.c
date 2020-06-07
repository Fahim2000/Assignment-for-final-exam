#include<stdio.h>
int main()
{
    int i,k,j,temp,inp,b[20],a[20],sum=0,so=0,l,m,c[20],n,flag;
    printf("\nPress 1 to  Sort an array in ascending orde\n");
    printf("\nPress 2 to Display sum of all odd values stored in an array\n");
    printf("\nPress 3 to Display all the prime numbers in the array\n");
    scanf("%d",&inp);
    if(inp==1)
    {
        printf("Enter 10 elements : ");
        for(i=0; i<10; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<10-1; i++)
        {
            for(j=0; j<10-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }

        printf("Number in Ascending orders :\n");
        for(i=0; i<10; i++)
        {
            printf("%d ",a[i]);
        }
    }
    else if (inp==2)
    {
        printf("Enter 10 elements: ");
        for(k=0; k<10; k++)
            scanf("%d",&b[k]);
        for(k=0; k<10; k++)
        {
            if(b[k]%2==1)
                so=so+b[k];
        }
        printf("Total Sum of Odd values is: %d ",so);
    }
    else if(inp==3)
    {
        printf("Enter 10 elements : ");
        for(l=0;l<10;l++)
        {
            scanf("%d",&c[l]);
        }
        for(l=0;l<10;l++)
        {
          n=c[l];
          flag=0;
          for(m=2;m<n;m++)
          {
              if(n%m==0)
              {
                  flag=1;
                  break;
              }

          }
          if(flag==0)
            printf("%d is prime\n",n);
        }





    }
    getch();
}
