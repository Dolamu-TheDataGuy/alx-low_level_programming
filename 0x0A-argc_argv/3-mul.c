#include "main.h"
#include <stdio.h>

/**
 * main - a program that multiplies two number.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if argument is not 2, 0 if argument is 2
 */

int main(int argc, char *argv[])
{
	int i, value = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			value *= atoi(argv[i]);
		}
		printf("%d\n", value);
		return (0);
	}
}
