#include "lists.h"

/**
 * print_listint - function that prints all elements of a list
 * @h: the linked list passed as a parameter to be printed
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
