#include<stdio.h>
int main()
{
    int number,count=0;
    printf ("enter the number :");
    scanf("%d",&number);

    while(number>0)
    {
        number=number/10;
        count++;
    }
    printf("the total digit of number is: %d",count);

    return 0;
}