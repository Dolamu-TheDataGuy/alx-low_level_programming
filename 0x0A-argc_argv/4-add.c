#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - check if s is an integer
 * @s: string to be checked
 * Return: 0 or 1
 */

int isInteger(const char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (0);
}

/**
 * main - adds positives numbers 
 * @argc: int
 * @argv: list
 * *Return: 0
 */

int main(int argc, char const *argv[])
{
	int sum;
	while (argc--)
	{
		if (isInteger(argv[argc]));
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}

	printf("%i\n", sum);

	return (0);
}
