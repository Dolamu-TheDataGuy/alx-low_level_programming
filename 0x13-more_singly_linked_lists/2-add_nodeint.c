#include "lists.h"
#include <string.h>

/**
 * *add_nodeint - add a node to a linked list head
 * @head: linked list head
 * @n: int element of the linked list
 * Return: number of elements
 */

listint_t *add_nodeint(listint_t *head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = NULL;

	new_node->next = head;
	head = new_node;
	return (head);
}
