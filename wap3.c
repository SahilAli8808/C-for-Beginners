//program to print the product of digit of any numbers 
#include<stdio.h>
int main()
{
    int n,product=1,rem;
    printf("Enter the number:");
    scanf("%d",&n);

    while (n>0)        //345
    {
        rem=n%10;       //5
        product=product*rem;    //1*5
        n=n/10;        //34

    }
    printf("product of digit = %d",product);

    return 0;
}