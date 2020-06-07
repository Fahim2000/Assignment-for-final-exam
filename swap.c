#include<stdio.h>
void swap(int *a , int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x;
    int y;
    printf("Enter the value of x = ");
    scanf("%d",&x);
    printf("\nEnter the value of y = ");
    scanf("%d",&y);
    printf("\nBefore swapping X =%d , Y = %d \n" , x, y);
    swap(&x,&y);
    printf("\nAfter swapping X =%d , Y = %d" , x, y);
    getch();
}
