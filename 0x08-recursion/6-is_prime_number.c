#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    /* Base cases: Check for n less than or equal to 1 */
    if (n <= 1)
    {
        return (0); /* 0 and 1 are not prime numbers */
    }

    /* Check for divisibility from 2 to the square root of n */
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return (0); /* If n is divisible by any number between 2 and sqrt(n), it's not prime */
        }
    }

    return (1); /* If no divisors were found, n is prime */
}

/**
 * main - entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    int number = 17; /* Change this to the desired number */
    int result = is_prime_number(number);

    if (result == 1)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return (0);
}

