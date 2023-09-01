#include <stdio.h>

/**
 *  * _print_rev_recursion - Prints a string in reverse.
 *   * @s: The string to be printed in reverse.
 *    */
void _print_rev_recursion(char *s)
{
	    if (*s != '\0')
		        {
				        /* If the current character is not the null character,
					 *          * make a recursive call with the next character.
					 *                   */
				        _print_rev_recursion(s + 1);

					        /* After the recursion, print the current character. */
					        putchar(*s);
						    }
}

/**
 *  * main - Entry point
 *   * Return: Always 0 (Success)
 *    */
int main(void)
{
	    char myString[] = "Hello, World!";
	        _print_rev_recursion(myString); /* Start from the beginning of the string */
		    putchar('\n'); /* Print a new line */
		        return (0);
}

