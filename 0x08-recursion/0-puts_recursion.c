#include "main.h"
#include <stdio.h>

/**
 *  * _puts_recursion - Prints a string, followed by a new line.
 *   * @s: The string to be printed.
 *    */
void _puts_recursion(char *s)
{
	    if (*s == '\0')
		        {
				        putchar('\n');
					        return;
						    }
	        else
			    {
				            putchar(*s);
					            _puts_recursion(s + 1);
						        }
}

/**
 *  * main - Entry point
 *   * Return: Always 0 (Success)
 *    */
int main(void)
{
	    char myString[] = "My world, needs you";
	        _puts_recursion(myString);
		    return (0);
}

