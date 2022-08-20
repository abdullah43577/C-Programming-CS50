#include <stdio.h>

int main (void)
{
    //declaring of all variables
    int i, j, space, rows;
    do 
    {
        printf("Height: ");
        scanf("%d", &rows);
    }
    //desired input is from 1 through 8
    while (!(rows >= 1 && rows <= 8));
    for (i = 1; i <= rows; i++)
    {
        //iterate over and print out spaces at first since we are printing an inverted pattern
        for (space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }
        //iterate over and print out the symbols that represent the shape
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}