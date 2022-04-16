#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print all strings with a separator
 * @separator: separate strings
 * @n: int, number of undefined argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *c;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(list, char*);
		if (c != NULL)
			print("%s", c);
		else
			printf("(nill)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(list);

	putchar('\n');
}



