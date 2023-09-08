#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("%s\n", argv[0]);
    } else if (argc == 2) {
        printf("%s\n", argv[1]);
    } else {
        printf("Too many arguments\n");
    }
    return 0;
}

