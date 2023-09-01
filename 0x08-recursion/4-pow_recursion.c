#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Calculates the power of a number recursively.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
    /* Base case: If y is negative, return -1 to indicate an error. */
    if (y < 0)
    {
        return -1;
    }

    /* Base case: If y is 0, return 1 because any number raised to the power of 0 is 1. */
    if (y == 0)
    {
        return 1;
    }

    /* Recursive case: Calculate the power using recursion. */
    return x * _pow_recursion(x, y - 1);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main()
{
    int base = 2;        /* Change this to the desired base. */
    int exponent = 3;    /* Change this to the desired exponent. */

    int result = _pow_recursion(base, exponent);

    if (result == -1)
    {
        printf("Error: Exponent cannot be negative.\n");
    }
    else
    {
        printf("%d raised to the power of %d is %d\n", base, exponent, result);
    }

    return 0;
}

