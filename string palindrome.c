#include<stdio.h>
#include<string.h>
int main()
{
    char string1[100],string2[100];
    int compare;
    printf("Enter string  : ");
    scanf("%s",string1);
    strcpy(string2,string1);
    strrev(string1);
    compare=strcmp(string1,string2);
    if(compare==0)
    {
        printf("Palindrome");
    }
    else
        printf("Not palindrome");
}
