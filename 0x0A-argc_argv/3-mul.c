nclude <stdio.h>
#include <stdlib.h>

/**
 *  * main - Multiplies two numbers provided as arguments.
 *   * @argc: Number of arguments.
 *    * @argv: Array of argument strings.
 *     *
 *      * Return: 0 if successful, 1 if there's an error.
 *       
*/
int main(int argc, char *argv[])
{
       	int i;
	int num1
	int num2;
	int Multiple;
        
	if (argc < 3) 
	{
	printf("Error\n");
	return (1); 
	}
       	for (i = 1; i < argc; i++)
	{
	num1 = atoi(argv[1]);					       num2 = atoi(argv[2]);					      Multiple = num1 * num2;				
	printf("Result is %d\n", Multiple);
	}
        return (0);
}
