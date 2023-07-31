#include "lists.h"

/**
 * listint_len - this function returns the number of elements in a linked list
 * @h: linked list passed as a parameter
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
