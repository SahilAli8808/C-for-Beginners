//convert any binary  umber into decimal numbers
#include<stdio.h>
int main()
{
    int rem,bin,j=1,dec=0,d;
    printf("Enter the binary number:");
    scanf("%d",&bin);

    while (bin>0)
    {
        rem=bin%10;
        d=rem*j;
        dec=dec+d;
        j=j*2;
        bin=bin/10;

    }
    printf("your binary number is:%d is converted into decimal=%d",bin,dec);
   



    
    return 0;
}