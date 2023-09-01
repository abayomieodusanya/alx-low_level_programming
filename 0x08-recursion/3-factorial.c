#include "main.h"
#include <stdio.h>

/**
 * factorial - Calculates the factorial of a non-negative integer.
 * @n: The integer for which to calculate the factorial.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
    /* Base case: If n is less than 0, return -1 to indicate an error. */
    if (n < 0)
    {
        return -1;
    }

    /* Base case: Factorial of 0 is 1. */
    if (n == 0)
    {
        return 1;
    }

    /* Recursive case: Calculate factorial using recursion. */
    return n * factorial(n - 1);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always returns 0.
 */
int main()
{
    int num = 5; /* You can change this to any non-negative integer. */
    int result = factorial(num);

    if (result == -1)
    {
        printf("Error: Factorial of a negative number is undefined.\n");
    }
    else
    {
        printf("Factorial of %d is %d\n", num, result);
    }

    return (0);
}

