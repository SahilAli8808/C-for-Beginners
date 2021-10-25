#include<stdio.h>
int main()
{
    char op;
    int a, b;
    printf("enter the number ,operator and another number");
    scanf("%d%c%d",&a,&op,&b);

    switch(op)
    {
        case '+':
        printf("Result = %d\n",a+b);
        break;
        case '-':
        printf("Result = %d\n",a-b);
        break;
        case '*':
        printf("Result = %d\n",a*b);
        break;
        case '/':
        printf("Result = %d\n",a/b);
        break;
        default:
        printf("enter the valid operator\n");
    }
    return 0;
}