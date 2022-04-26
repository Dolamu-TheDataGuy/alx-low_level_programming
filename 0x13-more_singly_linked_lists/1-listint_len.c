#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		num++;
	}
	return (num);
}

