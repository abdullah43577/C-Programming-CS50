#include <stdio.h>
#include <math.h>

int main (void)
{
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter an operator: ");
    scanf(" %c", &op);

    printf("Enter another number: ");
    scanf("%lf", &num2);

    if (op == '+')
    {
        printf("%f", num1 + num2);
    }
    else if (op == '-')
    {
        printf("%f", num1 - num2);
    }
    else if (op == '/')
    {
        printf("%f", num1 / num2);
    }
    else if (op == '*')
    {
        printf("%f", num1 * num2);
    }
    else
    {
        printf("invalid operator");
    }
    return 0;
}