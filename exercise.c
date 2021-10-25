#include<stdio.h>
int main()
{
    int number,sum=0;
    do
    {
        printf("enter the number (0 to stop) :");
        scanf("%d",&number);

        sum=sum+number;
    }
    while (number!=0);
    printf("sum is %d",sum);
}