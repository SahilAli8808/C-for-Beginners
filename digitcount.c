#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    
    do
    {
        num=num/10;
        count++;
    } while (num>0);
    printf("the digit of number is: %d",count);
    return 0;
}