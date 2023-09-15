#include "lists.h"

/**
 * print_dlistint - function that prints elements of a doubly linked list
 * @h: parameter/ head pointer
 * Return: 0
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
