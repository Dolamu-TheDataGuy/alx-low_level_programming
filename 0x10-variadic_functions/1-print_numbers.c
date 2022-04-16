#include "variadic function.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print all numbers with a seperator
 * @seperator: seperate numbers
 * @n: number of undefined arguments
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(list, int));
		if (i != n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	va_end(list);

	putchar('\n');
}
