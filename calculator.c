#include<stdio.h>

int main()
{
    char operator;
    int a, b;
    printf("Enter the number, operator and another number\n");
    scanf("%d%c%d", &a, &operator, &b);

    switch(operator)
    {
        case '+':
        printf("Result: %d\n", a + b);
        break;

        case '-':
        printf("Result: %d\n", a - b);
        break;

        case '*':
        printf("Result: %d\n", a * b);
        break;

        case '/':
        printf("Result: %d\n", a / b);
        break;

        default:
        printf("Enter the valid operator\n");
    }
    return 0;
}