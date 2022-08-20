#include <stdio.h>
// #include <cs50.h>
#include <math.h>

int main(void)
{
    int numb;
    // int numb = get_int("Enter a number: ");
    printf("Enter a number: ");
    scanf("%d", &numb);

    //logic-calculations
    if (numb % 2 == 0)
{
    printf("This is an even number\n");
}
else
{
    printf("This is an odd number\n");
}   
}

