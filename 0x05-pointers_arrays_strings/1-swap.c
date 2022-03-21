#include "main.h"

/**
 * swap_int - a functions that accepts two variable of integers and swaps their
 * values
 * @a : first integer
 * @b : second integer
 * Return : nothing
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
