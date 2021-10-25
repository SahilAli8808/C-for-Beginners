//program to find the largest number from given three numbers 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three numbers :\n");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b)
    {
        if (a>c)
         printf("the largest number is:%d\n",a);
        else
         printf("the largest number is:%d\n",c);

    }
     else
     { 
        if(b>c)
         printf("the largest number is:%d\n",b);
         else
         printf("the largest number is:%d\n",c);

     }
     return 0;
}