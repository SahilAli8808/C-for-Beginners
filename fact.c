//program to find the factorial of any numbers
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);

    while (n>0)
    {
        fact=fact*n;
        n=n-1;
    }
    printf("the factorial of number is:%d",fact);
    return 0;
}