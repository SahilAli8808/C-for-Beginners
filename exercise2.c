#include<stdio.h>
int main()
{
    int p=-3;
    p=-p-p+!p;
    /*here the -a value will be 3 and !a value will be 0
    because of !true(nonzero)=false=0 */
    printf("%d\n",p);
    
    printf("Question 2:\n");

    int a=2,b=1,c,d;
    c=a<b;
    d=(a>b)&&(c<b);
    printf("c=%d, d=%d",c,d);

    printf("Question 3:\n");
    int x=14,y,z;
    x=x%5;
    y=x/3;
    z=x/5%3;
    printf("a=%d,b=%d,c=%d",x,y,z);


    return 0;
}