#include "main.h"
#include <stdio.h>


/**
 * main - a program that prints its name followed by a new line.
 * @argc: argument count for command line.
 * @argv: argument value, a string that comes after a function.
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}

