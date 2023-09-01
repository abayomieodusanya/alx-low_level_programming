#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int length = strlen(s);

    /* Base case: An empty string is a palindrome. */
    if (length == 0)
    {
        return (1);
    }

    int start = 0;       /* Start index of the string. */
    int end = length - 1; /* End index of the string. */

    while (start < end)
    {
        if (s[start] != s[end])
        {
            return (0); /* If characters don't match, it's not a palindrome. */
        }
        start++;
        end--;
    }

    return (1); /* If the loop finishes without returning, it's a palindrome. */
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main()
{
    char myString[] = "racecar"; /* Change this to the desired string. */
    int result = is_palindrome(myString);

    if (result == 1)
    {
        printf("%s is a palindrome.\n", myString);
    }
    else
    {
        printf("%s is not a palindrome.\n", myString);
    }

    return (0);
}

