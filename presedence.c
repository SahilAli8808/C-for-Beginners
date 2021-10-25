#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,k;
     a=8,b=4,c=2,d=1,e=5,f=20;
     printf("result 1 is: %d\n",a+b-(c+d)*3%e+f/9);
     /* here resultant evaluate follows--
     = 8+4-(2+1)*3%5+20/9
     = 8+4-3*3%5+20/9 //bracket
     = 8+4-9%5+20/9 // * operator left to right
     = 8+4-4+20/9
     = 8+4-4+2
     = 12-4+2
     = 8+2
     = 10 */
     a=8,b=3,c=2,d=3,e=2,f=11;
     printf("result 2 is : %d\n",a-b||(a-b*c)+d&&e-f%3);
     /* here the resultant is follows--
     = 8-3||(8-3*2)+3&&2-11%3   
     = 8-3||(8-6)+3&&2-11%3   
     = 8-3||4+3&&2-11%3   
     = 8-3||4+3&&2-2  
     = 5||4+3&&2-2  
     = 5||7&&0  
     = 5||0
     =1 */  
    return 0;
}