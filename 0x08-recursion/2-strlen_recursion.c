#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Computes the length of a string using recursion.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s) {
    /* Base case: If we reach the end of the string (null character '\0'), return 0. */
    if (*s == '\0') {
        return 0;
    } else {
        /* Recursive case: Add 1 to the length and move to the next character. */
        return 1 + _strlen_recursion(s + 1);
    }
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main() {
    char myString[] = "Hello, World!";
    int length = _strlen_recursion(myString);
    
    /* Print the length of the string. */
    printf("The length of the string is: %d\n", length);
    
    return 0;
}

