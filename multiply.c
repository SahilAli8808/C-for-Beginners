#include<stdio.h>
int main()
{
     int num1,num2,result=0;
     printf("Enter the two numbers :");
     scanf ("%d%d",&num1,&num2);

     for (int i=1;i<=num2;i++)
     {
         result +=num1;
     }
     printf("the product of %d and %d is : %d",num1,num2,result);
    return 0;
}