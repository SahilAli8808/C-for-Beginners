//how to take any input from user
/* using the scanf keyword we can receive any input from the users 
syntax --> scanf("%d",&i);   here & (ampersand) is important
& is a "address of" operator and it means that jo aap value dene wale hai keyboard se.. wo 
i me store ho jayegi*/
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);

    printf("Enter the value of b:\n");
    scanf("%d",&b);

    printf("The sum of a and b is: %d",a+b);
    return 0;
}